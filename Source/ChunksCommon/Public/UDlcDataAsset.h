// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UDlcDataAsset.generated.h"

USTRUCT()
struct FDlcInfo {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    FString AssetName;

    UPROPERTY(EditAnywhere)
    FString AssetType = "Level";

    UPROPERTY(EditAnywhere)
    UTexture2D* AssetThumbnail;

    UPROPERTY(EditAnywhere)
    FString MountPoint;

    UPROPERTY(EditAnywhere)
    FString LevelName = "Init";
};


UCLASS()
class UDlcDataAsset : public UDataAsset {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    TArray<FDlcInfo> AssetItems;
};