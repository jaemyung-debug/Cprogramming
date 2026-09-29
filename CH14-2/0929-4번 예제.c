// **********************************************
// 제 목 : CH14-2 4번 예제
// 날 짜 : 2026년 9월29일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
void seperate(double num, int* i, double* d);
int main()
{
	double num;
	int i;
	double d;

	printf("실수를 입력하시오: ");
	scanf("%lf", &num);

	seperate(num, &i, &d);

	printf("정수 부분: %d\n", i);
	printf("소수 부분: %.2f\n", d);

	return 0;
}
void seperate(double num, int* i, double* d)
{
	*i = (int)num;
	*d = num - *i;

}