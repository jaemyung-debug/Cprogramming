
// **********************************************
// 제 목 :  CH24-1장 예제 1번
// 날 짜 :  2026년 11월 17일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
    char fname1[100]; // 열리는 파일 이름 받는 문자열 배열 선언
    char fname2[100]; // 복사할 파일 이름 받는 문자열 배열 선언

    FILE* fp; // 헤더 파일에 저장 되어 있는 파일 구조체를 가르키는 포인터 선언
    FILE* fp2; // 헤더 파일에 저장 되어 있는 파일 구조체를 가르키는 포인터 선언
    int ch;

    printf("복사할 파일명 : ");
    scanf("%99s", fname1);

    printf("복사받을 파일명 : ");
    scanf("%99s", fname2);

    fp = fopen(fname1, "r"); // fname1 파일 읽기 모드로 열고 fp 변수에 저장
    fp2 = fopen(fname2, "w"); // fname2 파일 쓰기 모드로 열고 fp2 변수에 저장

    if (fp == NULL || fp2 == NULL) // fp 또는 fp2 변수 값이 NULL 값이면 리턴값 1 즉 오류로 인한 프로그램 종료
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    while (1) // 항상 실행
    {
        ch = fgetc(fp); // fp 파일에서 문자열 하나씩 읽어 문자에 저장

        if (ch == EOF) // 파일에 끝이면 종료
        {
            break;
        }

        fputc(ch, fp2); // 읽은 문자 하나 씩 파일2에 저장
    }

    fclose(fp); // 파일 닫기
    fclose(fp2); // 파일2 닫기

    return 0;
}
