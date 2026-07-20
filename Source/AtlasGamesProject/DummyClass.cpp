#include "DummyClass.h"

// Kurucu (Constructor)
ADummyClass::ADummyClass()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Oyun başladığında çalışır
void ADummyClass::BeginPlay()
{
	Super::BeginPlay();
}

// Her kare (frame) çalışır
void ADummyClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}