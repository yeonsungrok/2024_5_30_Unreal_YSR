// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInvenWidget.h"
#include "Components/Widget.h"

void UMyInvenWidget::ToggleVisibility(bool bIsVisible)
{
	// ������ ���ü��� ����
	if (bIsVisible)
	{
		SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		SetVisibility(ESlateVisibility::Hidden);
	}
}
