// **********************************************
// 제 목 :  CH21-3장 예제 3번
// 날 짜 :  2026년 10월 29일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

void my_strcpy(char str2[], char str1[]); // my_strcpy 함수 선언
int main()
{
    char str1[20] = "1234567890";
    char str2[20];

    my_strcpy(str2, str1); // my_strcpy 함수 호출
    puts(str2); //puts 함수 호출

    return 0;
}
void my_strcpy(char str2[], char str1[])
{
    int i = 0;

    while (str1[i] != '\0') // 배열 1번이 널 문자 만날 때까지 반복
    {
        str2[i] = str1[i]; // 배열 1번 2번으로 한 문자씩 복사
        i++;
    }

    str2[i] = '\0'; // 문자열 마지막에 널 문자 추가
}