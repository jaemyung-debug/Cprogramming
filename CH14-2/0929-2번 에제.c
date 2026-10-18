// **********************************************
// 제 목 : CH14-2 2번 예제
// 날 짜 : 2026년 9월29일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
void max(int* arr,int*big); // max 함수 설정
int main()
{
	int arr[5];
	int big;

	printf("정수 5개를 입력하시오: \n");
	
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	max(arr,&big); // 함수 호출
	printf("최댓값은: %d", big);

	return 0;
}
void max(int* arr, int* big) //함수 정의
{
	*big = arr[0]; // 메인 함수 big에 저장된 값을 첫 번째 배열로 초기화
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > *big)
		{
			*big = arr[i]; // for 반복문을 통해 메인함수 big 값에 가장 큰 배열값 저장
		}
	}
}