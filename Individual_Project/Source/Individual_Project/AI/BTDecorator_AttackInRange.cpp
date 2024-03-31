// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_AttackInRange.h"
#include "IP_AI.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Interface/IP_AICharacterInterface.h"


UBTDecorator_AttackInRange::UBTDecorator_AttackInRange()
{
    NodeName = TEXT("CanAttack");
}

bool UBTDecorator_AttackInRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
   bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);
    
   APawn* ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
   if (nullptr == ControllingPawn)
   {
       return false;
   }

   IIP_AICharacterInterface* AIPawn = Cast<IIP_AICharacterInterface>(ControllingPawn);
   if (nullptr == AIPawn)
   {
       return false;
   }

   APawn* Target = Cast<APawn>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(BBKEY_TARGET));
   if (nullptr == Target)
   {
       return false;
   }

   float DistanceToTarget = ControllingPawn->GetDistanceTo(Target);
   float AttackRangeWithRadius = AIPawn->GetAIAttackRange();
   bResult = (DistanceToTarget <= AttackRangeWithRadius);

    return bResult;
}
