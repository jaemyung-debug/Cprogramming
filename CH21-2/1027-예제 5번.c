// **********************************************
// 제   목 : CH21-2장 예제 5번
//    
// 날   짜 : 2026년 10월 27일
// 작성자: 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 1;

    printf("문자열입력: ");
    fgets(str, sizeof(str), stdin); // 문자열 입력 받아 배열에 저장, 사이즈만큼 배열 크기 제한, stdin 호출

    for (i = 0; str[i] != '\0'; i++) // 배열이 빈 공간을 만날 때까지 진행
    {
        if (str[i] == ' ') // 문자열이 빈 공간을 만나면 
            count++;
    }

    printf("단어수 : %d", count);

    return 0;
}