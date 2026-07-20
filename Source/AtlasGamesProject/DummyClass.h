#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MassEntityTypes.h"
#include "DummyClass.generated.h" // En altta olmalı

// 1. The Enum can keep BlueprintType
UENUM(BlueprintType)
enum class ECrowdTaskType : uint8
{
	Idle		UMETA(DisplayName = "Idle"),
	Typing		UMETA(DisplayName = "Typing on PC"),
	Sweeping	UMETA(DisplayName = "Sweeping Floor")
};

// 2. The Custom Mass Fragment
// DO NOT USE USTRUCT() OR GENERATED_BODY() HERE!
struct ATLASGAMESPROJECT_API FMyCrowdTaskFragment : public FMassFragment
{
	// DO NOT USE UPROPERTY() HERE!
	ECrowdTaskType CurrentTask = ECrowdTaskType::Idle;
};

// 3. Sınıfın asıl tanımı (API Macrosu projenin adını taşır)
UCLASS()
class ATLASGAMESPROJECT_API ADummyClass : public AActor
{
	GENERATED_BODY()

public:
	ADummyClass();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};