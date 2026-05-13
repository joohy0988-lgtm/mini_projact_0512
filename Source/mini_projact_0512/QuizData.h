#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuizData.generated.h"

USTRUCT(BlueprintType)
struct FQuizData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quiz")
	FString Question;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quiz")
	bool bCorrectAnswer = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quiz")
	bool bIsUsed = false;
};