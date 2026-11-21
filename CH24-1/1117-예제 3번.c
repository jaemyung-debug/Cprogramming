// **********************************************
// 제 목 :  CH24-1장 예제 3번
// 날 짜 :  2026년 11월 17일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    char str[100]; // 문자열을 저장할 배열 선언
    FILE* fp; // 파일 구조체를 가리키는 포인터 선언
    int i;

    fp = fopen("result.txt", "w"); // result.txt 파일을 쓰기 모드로 열고 fp 변수에 저장

    if (fp == NULL) // fp 변수 값이 NULL이면 파일 열기 실패
    {
        printf("파일을 열 수 없습니다.\n");
        return 1; // 오류로 인한 프로그램 종료
    }

    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin); // 키보드로부터 문자열 입력

    for (i = 0; str[i] != '\0'; i++) // 문자열의 끝까지 반복
    {
        if (str[i] == '\n') // 엔터 문자이면 반복문 종료
        {
            break;
        }

        if (str[i] == ' ') // 공백 문자이면 줄바꿈
        {
            fputc('\n', fp); // 파일에 줄바꿈 문자 저장
        }
        else
        {
            fputc(str[i], fp); // 일반 문자는 그대로 파일에 저장
        }
    }

    fclose(fp); // 파일 닫기

    return 0; // 프로그램 정상 종료
}
