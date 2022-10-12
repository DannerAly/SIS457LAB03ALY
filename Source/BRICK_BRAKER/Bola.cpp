// Fill out your copyright notice in the Description page of Project Settings.


#include "Bola.h"

// Sets default values
ABola::ABola()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ABola::Multiplicarse(float _multiplicarse)
{
	multiplicarse = _multiplicarse;
}

void ABola::Crecer(float _crecer)
{
	crecer = _crecer;
}

void ABola::Rebotar(float _rebotar)
{
	rebotar = _rebotar;
}

void ABola::Destruirse(float _destruirse)
{
	destruirse = _destruirse;
}

void ABola::Danar(float _danar)
{
	danar = _danar;
}



// Called when the game starts or when spawned
void ABola::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABola::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

