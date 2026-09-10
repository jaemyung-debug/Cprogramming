// **********************************************
// 제   목 : CH13-1 실습 4번 문제
//    
// 날   짜 : 2026년 9월10일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS // 보안오류방지

#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int main()
{
	double arr[5];
	double* ptr = arr;

	for (int i = 0; i < 5; i++)
	{
		printf("숫자를 입력하세요: ");
		scanf(" %lf", &arr[i]);
	}
	//1번
	printf("\n1번 결과: ");
	for (int i=0; i<5; i++)
	{
		arr[i] += 2;
		printf("%.2f ", arr[i]);
		
	}
	//2번
	printf("\n2번 결과: ");
	for (int i = 0; i < 5; i++)
	{
		ptr[i] += 2;
		printf("%.2f ", arr[i]);

	}
	//3번
	printf("\n3번 결과: ");
	for (int i = 0; i < 5; i++)
	{
		*(ptr+i) += 2;
		printf("%.2f ", arr[i]);
	}
	//4번
	printf("\n4번 결과: ");
	for (int i = 0; i < 5; i++)
	{
		*(arr + i) += 2;
		printf("%.2f ", arr[i]);

	}
	//5번
	printf("\n5번 결과: ");
	for (int i = 0; i < 5; i++)
	{
		*ptr++ += 2;
		printf("%.2f ", arr[i]);
	
	}
	
	return 0;
}