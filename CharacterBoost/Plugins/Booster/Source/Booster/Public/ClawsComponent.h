//// Fill out your copyright notice in the Description page of Project Settings.
//
#pragma once
#include "ModuleManager.h"
#include "Components/ActorComponent.h"
#include "ClawsComponent.generated.h"
//
//
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BOOSTER_API UClawsComponent : public USceneComponent
{
	GENERATED_BODY()
//
public:	
	// Sets default values for this component's properties
	UClawsComponent();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;



};
