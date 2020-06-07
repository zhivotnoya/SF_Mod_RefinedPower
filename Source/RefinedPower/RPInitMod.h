// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "mod/actor/SMLInitMod.h"
#include "util/Utility.h"
#include "util/Logging.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"
#include "RPInitMod.generated.h"

/**
 * 
 */
UCLASS()
class REFINEDPOWER_API ARPInitMod : public ASMLInitMod
{
	GENERATED_BODY()
	

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		TArray<FVector> WT_FastLocations;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		TArray<FVector> WT_MediumLocations;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		TArray<FVector> WT_SlowLocations;

	UFUNCTION(BlueprintCallable, Category="RefinedPower")
	void loadNodes();

	void loadWTNToArray(TArray<TSharedPtr<FJsonValue>> Rows, TArray<FVector> &arr);
};
