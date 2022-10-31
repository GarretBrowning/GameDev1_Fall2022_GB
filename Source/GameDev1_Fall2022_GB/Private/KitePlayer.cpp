// Fill out your copyright notice in the Description page of Project Settings.


#include "KitePlayer.h"

#include "Camera/CameraComponent.h"
#include "PaperFlipbookComponent.h"

// Sets default values
AKitePlayer::AKitePlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setting pawn to be controlled by the lowest-numbered player:
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Creating a root component to attach to:
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Creating player camera:
	UCameraComponent* PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	
	// Attach our camera and visible object to our root component. Offset and rotate the camera.
	PlayerCamera->SetupAttachment(RootComponent);
	//OurCamera->SetRelativeLocation(FVector(-250.0f, 0.0f, 250.0f));
	//OurCamera->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));

	UPaperFlipbookComponent* PlayerFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Flipbook"));
}

// Called when the game starts or when spawned
void AKitePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKitePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AKitePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

