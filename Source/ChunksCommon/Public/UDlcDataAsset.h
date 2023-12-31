// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Texture2D.h"
#include "UDlcDataAsset.generated.h"


USTRUCT(BlueprintType)
struct FDlcInfo {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DLC")
    FString AssetName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DLC")
    FString AssetType = "Level";

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DLC")
    UTexture2D* AssetThumbnail;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DLC")
    FString MountPoint;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DLC")
    FString LevelName = "Init";

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DLC")
    FString Description = "DLC Description goes here";
};


UCLASS(BlueprintType)
class CHUNKSCOMMON_API UDlcDataAsset : public UDataAsset {
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DLC")
    TArray<FDlcInfo> AssetItems;
};