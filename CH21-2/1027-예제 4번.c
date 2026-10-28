// **********************************************
// 제   목 : CH21-2장 예제 4번
//    
// 날   짜 : 2026년 10월 27일
// 작성자: 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[20];
    int i = 0;

    printf("문자열입력:");
    fgets(str, sizeof(str), stdin); //문자열 입력 받아 배열 저장, 사이즈 길이만큼 제한, stdin 호출 

    while (str[i] != '\0') // 문자열이 빈 공간을 만나면 실행
    {
        if (str[i] == '\n') // 문자열이 줄 바꿈 기호를 만나면 실행
        {
            str[i] = '\0'; // 문자열이 빈 공간을 만나면 종료
            break;
        }
        i++;
    }

    printf("%s", str);

    return 0;
}