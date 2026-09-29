// **********************************************
// 제 목 : CH14-2 예제 5번
// 날 짜 : 2026년 9월 29일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031) 
#include <stdio.h>
void showData(const int* ptr)
{
	int* rptr = ptr;
	printf("%d\n", *rptr);
	*rptr = 20;
}
int main()
{
	int num = 10;
	int* ptr = &num;
	showData(ptr);
	return 0;
}
