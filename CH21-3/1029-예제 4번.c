// **********************************************
// 제 목 :  CH21-3장 예제 4번
// 날 짜 :  2026년 10월 29일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
void my_strcat(char str1[], char str2[]); //my_strcat함수 선언
int main()
{
	char str1[20] = "First~";
	char str2[20] = "Second";
	my_strcat(str1, str2); //my_strcat함수 호출
	puts(str1); //puts함수 호출
	return 0;
}
void my_strcat(char str1[], char str2[]) // my_strcat 함수 정의
{
    int i = 0, j = 0;

    while (str1[i] != '\0') // str1의 끝을 찾음
    {
        i++;
    }

    while (str2[j] != '\0') // str2의 문자를 하나씩 복사
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0'; // 마지막에 널문자 추가
}