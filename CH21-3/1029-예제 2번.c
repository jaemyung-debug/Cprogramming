// **********************************************
// 제 목 :  CH21-3장 예제 2번
// 날 짜 :  2026년 10월 29일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]); // 문자열의 문자 제거 함수 선언
int my_strlen(char str[]); // 문자열의 길이를 계산하는 함수 선언
int main()
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);  // fgets()는 개행 문자 '\n'도 입력받을 수 있음
	printf("길이: %d, 내용: %s \n", my_strlen(str), str);
	RemoveBSN(str); // 문자열에 포함된 문자 제거
	printf("길이: %d, 내용: %s \n", my_strlen(str), str);
	return 0;

}
void RemoveBSN(char str[])
{
	int len = strlen(str); // 문자열의 길이를 계산

	if (len > 0 && str[len - 1] == '\n')  // 문자열이 비어 있지 않고 마지막 문자가 개행 문자라면 종료 문자로 변환
	{
		str[len - 1] = '\0';
	}
}
int my_strlen(char str[])
{
	int i = 0;

	while (str[i] != '\0') // 문자열 종료 문자 '\0'을 만날 때까지 반복
	{
		i++;
	}

	return i; // 계산한 문자열의 길이를 반환
}