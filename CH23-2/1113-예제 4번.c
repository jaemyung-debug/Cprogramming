// **********************************************
// 제 목 :  CH23-2장 예제 4번
// 날 짜 :  2026년 11월 13일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

enum Direction // 방향을 나타내는 열거형 선언
{
    UP = 10,
    DOWN = 20,
    LEFT = 30,
    RIGHT = 40
}; // 숫자 대신 의미를 알기 쉬운 이름으로 적용

int main(void)
{
    enum Direction direction = UP; 

    switch (direction)
    {
    case UP:
        printf("현재방향: 위");
        break;

    case DOWN:
        printf("현재방향: 아래");
        break;

    case LEFT:
        printf("현재방향: 왼쪽");
        break;

    case RIGHT:
        printf("현재방향: 오른쪽");
        break;
    }

    return 0;
}
