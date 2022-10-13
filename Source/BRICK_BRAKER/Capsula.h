// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"

UCLASS()
class BRICK_BRAKER_API ACapsula : public AActor
{
	GENERATED_BODY()
	
private:
	float explotar;
	float moverse;

public:	
	// Sets default values for this actor's properties
	ACapsula();
	//metodos

	void Explotar(float _explotar);
	void Moverse(float _moverse);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//propiedades

	float color;
	float tamano = 100.0;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
