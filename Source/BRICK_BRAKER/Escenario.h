// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenario.generated.h"

UCLASS()
class BRICK_BRAKER_API AEscenario : public AActor
{
	GENERATED_BODY()
	
private:

	float cambiar;
	float reiniciar;

public:	
	// Sets default values for this actor's properties
	AEscenario();
	
	//Metodos

	void Cambiar(float _cambiar);
	void Reiniciar(float _reiniciar);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Propiedades 
	float tamano = 200.0F;
	float color;
	float limite = 100.0F;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
