// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillEventComponent.h"

// Sets default values for this component's properties
USkillEventComponent::USkillEventComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USkillEventComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USkillEventComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USkillEventComponent::PlaySkill() {
	/*FOnAkPostEventCallback nullCallback;

	skillEventID = UAkGameplayStatics::PostEvent(SkillEvent, GetOwner(), int32(0), nullCallback);*/

	/*FOnAkPostEventCallback nullCallback;
	TArray<FAkExternalSourceInfo> nullSources;

	skillEventID =  UAkGameplayStatics::PostEvent(m_SkillEvent, GetOwner(), int32(0), nullCallback, false);*/
}

void USkillEventComponent::StopSkill() {

	/*if (auto* SoundEngine = IWwiseSoundEngineAPI::Get())
	{
		SoundEngine->ExecuteActionOnPlayingID(AK::SoundEngine::AkActionOnEventType::AkActionOnEventType_Stop, skillEventID, int32(200));
	}*/

}

