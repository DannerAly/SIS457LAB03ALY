// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ladrillo.generated.h"

UCLASS()
class BRICK_BRAKER_API ALadrillo : public AActor
{
	GENERATED_BODY()

private:

	float reducciondevida;
	float desaparecer;
	
public:	
	// Sets default values for this actor's properties
	ALadrillo();

	//Metodos
	
	void ReducciondeVida(float _reducciondevida);
	void Desaparecer(float _desaparecer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Propiedades

	int vida = 100.0F;
	float tamano = 100.0F;
	float color;
	float forma = 50.0F;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
