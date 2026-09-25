// **********************************************
// 제   목 : CH14-1 3번 예제
// 날   짜 : 2026년 9월22일
// 작성자 : 2401486 신재명
// *********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031) 

#include<stdio.h>
int add(int value);

int main(void)
{
	int number;

	printf("정수를 입력하시오: ");
	scanf("%d", &number);

	number = add(number);
	printf("2만큼 증가한 값: %d\n", number);

	return 0;

}
int add(int value)
{
	value += 2;
	return value;
}