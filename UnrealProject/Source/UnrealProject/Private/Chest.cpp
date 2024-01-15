// Fill out your copyright notice in the Description page of Project Settings.


#include "Chest.h"
#include "Components/StaticMeshComponent.h"

/*
For Multiplayer
#inlcude "Net/UnrealNetwork.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(Chest.h)
*/

// Sets default values
AChest::AChest()
{
    BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    RootComponent = BaseMesh;

    LidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LidMesh"));
    LidMesh->SetupAttachment(BaseMesh);

    TargetPitch = 110;

    //
    bReplicates = true;

}

void AChest::Interact_Implementation(APawn* Inst)