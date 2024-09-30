// Fill out your copyright notice in the Description page of Project Settings.

#include "Pointer.h"

#include "Components/TextRenderComponent.h"

// Sets default values
APointer::APointer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	
	TextRenderComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderComponent"));
	TextRenderComponent->SetupAttachment(RootComponent);
	TextRenderComponent->SetHorizontalAlignment(EHTA_Center);
	
}

// Called when the game starts or when spawned
void APointer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APointer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

