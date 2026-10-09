// **********************************************
// 제 목 : CH19-1 예제 2번 매개변수에 함수 포인터
//    
// 날 짜 : 2026년 10월08일
// 작성자 : 2401486 신재명
// *********************************************
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int cal(int a, int b, int(*fp)(int, int))
{
	return fp(a, b);
}
int main()
{
	printf("%d\n", cal(10, 20, add));
	printf("%d\n", cal(10, 20, sub));

	return 0;
}