#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuizData.generated.h"

UENUM(BlueprintType)
enum class EQuizPhase : uint8
{
    Idle,
    Reading,    // 10초: 문제 읽기
    Answering,  // 15초: 발판 선택
    Result      // 3초: 결과 표시
};

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

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quiz")
    int32 Difficulty = 1; // 1=하, 2=중, 3=상
};
