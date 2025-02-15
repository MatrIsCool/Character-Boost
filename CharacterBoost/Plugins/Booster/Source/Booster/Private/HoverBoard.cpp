// Fill out your copyright notice in the Description page of Project Settings.

#include "BoosterPrivatePCH.h"
#include "HoverBoard.h"


// Sets default values for this component's properties
UHoverBoard::UHoverBoard()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHoverBoard::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHoverBoard::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

