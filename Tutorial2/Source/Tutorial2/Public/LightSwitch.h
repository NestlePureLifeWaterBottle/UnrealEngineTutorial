// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightSwitch.generated.h"

UCLASS()
class TUTORIAL2_API ALightSwitch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightSwitch();

	/** point light compnent */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Switch Components")
	class UPointLightComponent* PointLight1;

	/* Sphere Component*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Switch Components")
	class USphereComponent* Sphere1;

	/* the desired intensity for the light */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Variables");
	float DesiredIntensity;

	/* called when something enters the sphere component*/
	UFUNCTION(BlueprintNativeEvent, Category = "Switch Functions")
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	/*called when something leaves the sphere component*/

	UFUNCTION(BlueprintNativeEvent, Category = "Switch Functions")
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void OnOverlapBegin_Implementation(class UPrimitiveComponent* OverLappedComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void OnOverlapEnd_Implementation(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	/* Toggles the light component's visibility*/
	UFUNCTION()
	void ToggleLight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
};
