// Fill out your copyright notice in the Description page of Project Settings.


#include "Ladrillo.h"
#include "Escenario.h"

// Sets default values
AEscenario::AEscenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AEscenario::Cambiar(float _cambiar)
{
	cambiar = _cambiar;
}

void AEscenario::Reiniciar(float _reiniciar)
{
	reiniciar = _reiniciar;
}

// Called when the game starts or when spawned
void AEscenario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

