// **********************************************
// 제   목 : CH21-2장 예제 3번
//    
// 날   짜 : 2026년 10월 27일
// 작성자: 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char name[30]; //이름용 배열 선언
    char address[100]; //주소용 배열 선언
    char car[30]; //자동차용 배열 선언

    printf("이름: ");
    fgets(name, sizeof(name), stdin); //이름을 받아 배열에 저장, 사이즈만큼 배열 크기 제한, stdin 호출

    printf("주소: ");
    fgets(address, sizeof(address), stdin); //주소를 받아 배열에 저장, 사이즈만큼 배열 크기 제한, stdin 호출

    printf("자동차번호: ");
    fgets(car, sizeof(car), stdin); //자동차를 받아 배열에 저장, 사이즈만큼 배열 크기 제한, stdin 호출

    printf("\n<결과출력>\n");

    printf("이름:");
    fputs(name, stdout); // 이름 출력, stdout 호출

    printf("주소:");
    fputs(address, stdout); // 주소 출력, stdout 호출

    printf("자동차번호:");
    fputs(car, stdout); // 자동차 출력, stdout 호출

    return 0;
}