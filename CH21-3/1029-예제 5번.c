// **********************************************
// 제 목 :  CH21-3장 예제 5번
// 날 짜 :  2026년 10월 29일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

int main()
{
	char str[5][20];
	int max = 0;
	int min = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("문자열 입력: ");
		scanf("%19s", str[i]);
	}
	for (int i = 1; i < 5; i++)
	{
		if (strcmp(str[i], str[min]) < 0) // strcmp로 현재 배열이 기존 최소보다 앞인지 확인
			min = i;

		if (strcmp(str[i], str[max]) > 0) // strcmp로 현재 배열이 기존 최대보다 뒤인지 확인
			max = i;
	}
	printf("제일앞 : %s\n", str[min]);
	printf("제일뒤 : %s\n", str[max]);

	return 0;
}