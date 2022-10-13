// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "contador.generated.h"

UCLASS()
class BRICK_BRAKER_API Acontador : public AActor
{
	GENERATED_BODY()

private:

	float contar;
	float cambiarcolor;

public:
	// Sets default values for this actor's properties
	Acontador();
	//Metodos

	void Contar(float _contar);
	void CambiarColor(float _cambiarcolor);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//Propiedades

	float  tamano = 100.0F;
	float  color;
	float  forma = 100.0F;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
