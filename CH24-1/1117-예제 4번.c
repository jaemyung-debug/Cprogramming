// **********************************************
// 제 목 :  CH24-1장 예제 4번
// 날 짜 :  2026년 11월 17일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    FILE* fp; // 원본 파일을 가리키는 파일 포인터 선언
    FILE* fp2; // 복사할 파일을 가리키는 파일 포인터 선언
    int ch; // 읽어온 문자를 저장할 변수 선언

    fp = fopen("test.txt", "r"); // test.txt 파일을 읽기 모드로 열고 fp 변수에 저장

    if (fp == NULL) // fp 변수 값이 NULL이면 원본 파일 열기 실패
    {
        printf("원본 파일을 열 수 없습니다.\n");
        return 1; // 오류로 인한 프로그램 종료
    }

    fp2 = fopen("result.txt", "w"); // result.txt 파일을 쓰기 모드로 열고 fp2 변수에 저장

    if (fp2 == NULL) // fp2 변수 값이 NULL이면 복사 파일 열기 실패
    {
        printf("복사할 파일을 열 수 없습니다.\n");
        fclose(fp); // 원본 파일 닫기
        return 1; // 오류로 인한 프로그램 종료
    }

    while (1) // 무한 반복
    {
        ch = fgetc(fp); // fp 파일에서 문자 하나씩 읽어 ch에 저장

        if (ch == EOF) // 파일의 끝이면 반복문 종료
        {
            break;
        }

        fputc(ch, fp2); // 읽어온 문자 하나를 fp2 파일에 저장

        if (ch == '.') // 읽어온 문자가 마침표이면 줄바꿈
        {
            fputc('\n', fp2); // fp2 파일에 줄바꿈 문자 저장
        }
    }

    fclose(fp); // 원본 파일 닫기
    fclose(fp2); // 복사한 파일 닫기

    return 0; // 프로그램 정상 종료
}
