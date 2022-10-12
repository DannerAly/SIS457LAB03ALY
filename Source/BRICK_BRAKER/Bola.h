// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bola.generated.h"

UCLASS()
class BRICK_BRAKER_API ABola : public AActor
{
	GENERATED_BODY()
	
private:

	float multiplicarse;
	float crecer;
	float rebotar;
	float destruirse;
	float danar;
	
public:	
	// Sets default values for this actor's properties
	ABola();

	//metodos

	void Multiplicarse(float _multiplicarse);
	void Crecer(float _crecer);
	void Rebotar(float _rebotar);
	void Destruirse(float _destruirse);
	void Danar(float _danar);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//Propiedades

	float color;
	float tamano = 50.0F;
	float forma = 30.0F;
	float velocidad = 40.0F;
	float trayectoria = 45.F;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
