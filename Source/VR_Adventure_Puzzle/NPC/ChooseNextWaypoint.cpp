// Fill out your copyright notice in the Description page of Project Settings.

#include "VR_Adventure_Puzzle.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "PatrolRoutes.h"
#include "ChooseNextWaypoint.h"

EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{

	//Get Patrol points
	auto AIController = OwnerComp.GetAIOwner();
	auto ControlledPawn = AIController->GetPawn();
	auto PatrolRoute = ControlledPawn->FindComponentByClass<UPatrolRoutes>();

	if (!ensure(PatrolRoute)) { return EBTNodeResult::Failed; }
	auto PatrolPoints = PatrolRoute->PatrolRoutes;

	//Set next waypoint
	if (PatrolPoints.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Patrol Points Set for Character: %s"), *ControlledPawn->GetName());
		return EBTNodeResult::Failed;
	}
	auto BlackboardComp = OwnerComp.GetBlackboardComponent();
	auto Index = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	BlackboardComp->SetValueAsObject(Waypoint.SelectedKeyName, PatrolPoints[Index]);

	//Cycle index
	auto NextIndex = (Index + 1) % PatrolPoints.Num();
	BlackboardComp->SetValueAsInt(IndexKey.SelectedKeyName, NextIndex);

	return EBTNodeResult::Succeeded;
}
