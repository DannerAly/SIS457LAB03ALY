// Fill out your copyright notice in the Description page of Project Settings.


#include "contador.h"

// Sets default values
Acontador::Acontador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


void Acontador::Contar(float _contar)
{
	contar = _contar;
}

void Acontador::CambiarColor(float _cambiarcolor)
{
	cambiarcolor = _cambiarcolor;
}


// Called when the game starts or when spawned
void Acontador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Acontador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

