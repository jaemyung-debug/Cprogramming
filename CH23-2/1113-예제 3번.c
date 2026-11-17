// **********************************************
// 제 목 :  CH23-2장 예제 3번
// 날 짜 :  2026년 11월 13일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
union Data // 공용체 선언
{
    unsigned int num;
    unsigned char byte[4];
};

int main()
{
    union Data data; // 공용체 data 선언

    printf("정수를 입력하시오(16진수): ");
    scanf("%x", &data.num);

    printf("최상위(4번째) 바이트(16진수) : %x\n", data.byte[3]);
    printf("3번째 바이트(16진수) : %x\n", data.byte[2]);
    printf("2번째 바이트(16진수) : %x\n", data.byte[1]);
    printf("최하위(1번째) 바이트(16진수) : %x\n", data.byte[0]);

    return 0;
}