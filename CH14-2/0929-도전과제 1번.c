// **********************************************
// 제 목 : CH14-2 예제 6번-1
// 날 짜 : 2026년 9월 29일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031) 
#include <stdio.h>
void hol(int arr[]);
void zak(int arr[]);

int main()
{
	int arr[10];

	printf("10개의 숫자를 입력하시오: \n");
	for  (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	hol(arr);
	zak(arr);

	return 0;
}
void hol(int arr[])
{
	printf("홀수 출력: ");
	
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	}
}
void zak(int arr[])
{
	printf("짝수 출력: ");

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
}