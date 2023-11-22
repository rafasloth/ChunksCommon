// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UDlcDataAsset.generated.h"


USTRUCT(BlueprintType)
struct FDlcInfo {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString AssetName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString AssetType = "Level";

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UTexture2D* AssetThumbnail;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString MountPoint;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString LevelName = "Init";
};


UCLASS(BlueprintType)
class UDlcDataAsset : public UDataAsset {
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DLC")
    TArray<FDlcInfo> AssetItems;
};