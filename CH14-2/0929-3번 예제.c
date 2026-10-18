// **********************************************
// 제   목 : CH14-2 3번 예제
// 날   짜 : 2026년 9월29일
// 작성자 : 2401486 신재명
// *********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
void get_data(int data[]); // 함수 선언
int main()
{
	int i, data[5];
	
	get_data(data); // 함수 호출

	for (i = 0; i < 5; i++)
	{
		printf("%d번째 data: %d\n", i + 1, data[i]); // for 반복문으로 호출 된 값 출력
	}
	return 0;
}
void get_data(int data[]) // 함수 정의
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 data를 입려하시오: ",i+1); // for 반복문으로 data 입력 받아 배열에 저장
		scanf("%d", &data[i]);
	}
}