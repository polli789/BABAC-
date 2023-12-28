// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BBC.generated.h"
//전방선언
class USpringArmComponent;
class UCameraComponent;


UCLASS()
class BABACODEGAME_API ABBC : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABBC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//포인터생성,언리얼 기능추가
	UPROPERTY(BlueprintReadOnly,VisibleAnywhere,Category = "Components")
	TObjectPtr<USpringArmComponent>SpringArmComponent;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	TObjectPtr<UCameraComponent>CameraComponent;
	
};
