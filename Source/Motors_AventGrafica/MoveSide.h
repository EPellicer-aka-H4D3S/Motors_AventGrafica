#pragma once
#include "CoreMinimal.h"
#include "MoveSide.generated.h"

UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class UMoveSide : public UActorComponent
{
	GENERATED_BODY()
public:
	UMoveSide();
	void TickComponent(float DeltaTime
		, enum ELevelTick Tick
		, FActorComponentTickFunction* func) override;

	
};