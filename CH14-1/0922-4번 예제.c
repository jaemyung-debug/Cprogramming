// **********************************************
// 제   목 : CH!4-1 4번 예제   
// 날   짜 : 2026년 9월22일
// 작성자 : 2401486 신재명
// *********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
void swap(int* px, int* py, int* pz);
int main(void)
{
	int x, y, z;

	printf("정수 x를 입력하시오: ");
	scanf("%d", &x);

	printf("정수 y를 입력하시오: ");
	scanf("%d", &y);

	printf("정수 z를 입력하시오: ");
	scanf("%d", &z);
	printf("swap함수 호출 전 x=%d, y=%d, z=%d\n", x, y, z);

	swap(&x, &y, &z);
	printf("swap함수 호출 후 x=%d, y=%d, z=%d\n", x,y,z);

	return 0;
}
void swap(int* px, int* py, int* pz)
{
	int k;
	k = *pz;
	*pz = *py;
	*py = *px;
	*px = k;
}
