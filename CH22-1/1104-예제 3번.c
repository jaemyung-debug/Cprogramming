// **********************************************
// 제 목 :  CH22-1장 예제 2번
// 날 짜 :  2026년 11월 4일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct car // 자동차 구조체 선언
{
	char model[30]; // 자동차 모델 선언
	char number[100]; // 자동차 번호판 선언
	int distance; // 자동차 주행거리 선언
};
int main()
{
	struct car c; // 자동차 모델 c 선언
	printf("모델을 입력하시오; ");
	scanf("%29s", c.model);
	printf("번호판을 입력하시오: ");
	scanf("%99s", c.number);
	printf("주행거리를 입력하시오: ");
	scanf("%d", &c.distance);

	getchar(); //입력 버퍼에 남아 있는 개행 문자('\n')를 제거

	printf("\n");
	printf("1.모델: %s\n", c.model);
	printf("2.번호판: %s\n", c.number);
	printf("3.주행거리: %d km\n", c.distance);

	return 0;
}