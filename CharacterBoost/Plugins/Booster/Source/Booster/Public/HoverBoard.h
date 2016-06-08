// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "ModuleManager.h"
#include "Components/ActorComponent.h"
#include "HoverBoard.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CHARACTERBOOST_API UHoverBoard : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHoverBoard();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

		
	
};
