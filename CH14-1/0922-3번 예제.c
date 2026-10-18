// **********************************************
// 제   목 : CH14-1 3번 예제
// 날   짜 : 2026년 9월22일
// 작성자 : 2401486 신재명
// *********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031) 
#include<stdio.h>
void re(int value); // re함수 생성 
int main()
{
	int number;

	printf("정수를 입력하시오: ");
	scanf("%d", &number);

	re(number); // re함수에 number 대입

	return 0;
}
void re(int value)
{
	value += 2; // 대입 값에 2 증가
	printf("2만큼 증가한 값: %d\n", value);
}