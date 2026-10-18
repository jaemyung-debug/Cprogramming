// **********************************************
// 제 목 : CH14-2 4번 예제
// 날 짜 : 2026년 9월29일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
void sep(double num, int* a, double*d); // 함수 선언
int main()
{
	double num;
	int a;
	double d;

	printf("실수를 입력하시오: ");
	scanf("%lf", &num);

	sep(num,&a,&d); // 함수 호출

	printf("정수부: %d\n", a);
	printf("실수부: %lf",d);

	return 0;
}
void sep(double num, int* a, double* d) // 함수 정의
{
	*a = (int)num; // 강제형변환을 통한 *a의 값이 num의 정수 부분만 저장
	*d = num - *a; // num에서 정수 부분이 저장된 값만큼 빼 실수 저장
}