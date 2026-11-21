// **********************************************
// 제 목 :  CH24-1장 예제 2번
// 날 짜 :  2026년 11월 17일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    FILE* fp; // 파일 구조체를 가리키는 포인터 선언
    int ch; // 파일에서 읽어온 문자를 저장할 변수 선언

    fp = fopen("test.txt", "r"); // test.txt 파일을 읽기 모드로 열고 fp에 저장

    if (fp == NULL) // 파일을 열지 못하면 오류로 인한 프로그램 종료
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    while (1) // 무한 반복
    {
        ch = fgetc(fp); // 파일에서 문자 하나씩 읽어 ch에 저장

        if (ch == EOF) // 파일의 끝이면 반복문 종료
        {
            break;
        }

        putchar(ch); // 읽어온 문자 하나를 화면에 출력

        if (ch == '.') // 읽어온 문자가 마침표이면 줄바꿈
        {
            printf("\n");
        }
    }

    fclose(fp); // 파일 닫기

    return 0; // 프로그램 정상 종료
}
