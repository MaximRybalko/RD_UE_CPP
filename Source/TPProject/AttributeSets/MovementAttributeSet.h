// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TPProject/TPAttributeSet.h"
#include "MovementAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class TPPROJECT_API UMovementAttributeSet : public UTPAttributeSet
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Speed;
	ATTRIBUTE_ACCESSORS(UMovementAttributeSet, Speed);
	
};
