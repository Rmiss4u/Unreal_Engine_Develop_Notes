#include "MyObject.h"
UMyObject::UMyObject() {
	MyFloat = 0.0f;
}
void UMyObject::MyFunction() {
	UE_LOG(LogTemp, Log, TEXT("Hello World"));//�����ͨ���
	UE_LOG(LogTemp, Warning, TEXT("Hello World"));//�����ɫ���
	UE_LOG(LogTemp, Error, TEXT("Hello World"));//�����ɫ���
}