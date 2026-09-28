// **********************************************
// 제   목 : CH!4-1 5번 예제   
// 날   짜 : 2026년 9월22일
// 작성자 : 2401486 신재명
// *********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
int valuegop(int num);
void refgop(int* num);

int main()
{
	int num;
	int a;

	printf("숫자를 입력하시오: ");
	scanf("%d", &num);

	a = num;

	//call-by-value
	num = valuegop(num);
	printf("Call-by-value 결과: %d\n", num);

	num = a;

	//call-by-reference
	refgop(&num);
	printf("Call-by-reference 결과: %d\n", num);

	return 0;
}
int valuegop(int num)
{
	return num * 100 ;
}
void refgop(int* num)
{
	*num = *num * 100;
}
