// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/InventoryWidget.h"
#include "Kismet/GameplayStatics.h"
#include "TPPlayerController.h"
#include "InventorySystemComponent.h"
#include "Components/WrapBox.h"

UInventoryWidget::UInventoryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	UE_LOG(LogTemp, Display, TEXT("inven widget construct"));

	ATPPlayerController* tpcontroller = Cast<ATPPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if(tpcontroller != nullptr)
	{
		invencomponent = tpcontroller->GetComponentByClass<UInventorySystemComponent>();

		UpdateInven(); // �̰� �����ڿ� �־ ������ �� ���� pre construct �� �ٲ���� �� ��
	}
}

void UInventoryWidget::UpdateInven()
{
	InvenGrid->ClearChildren();

	if (invencomponent != nullptr)
	{
	}
}

void UInventoryWidget::OpenInven()
{
	// ���� �Ǿ� �ִµ�
}

void UInventoryWidget::CloseInven()
{
	// �̰͵� �����εǾ� �ִµ�
}
