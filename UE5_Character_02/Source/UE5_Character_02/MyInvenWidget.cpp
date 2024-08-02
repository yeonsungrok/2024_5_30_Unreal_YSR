// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInvenWidget.h"
#include "Components/Widget.h"

void UMyInvenWidget::ToggleVisibility(bool bIsVisible)
{
	// 위젯의 가시성을 설정
	if (bIsVisible)
	{
		SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		SetVisibility(ESlateVisibility::Hidden);
	}
}
