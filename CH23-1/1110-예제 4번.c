// **********************************************
// 제 목 :  CH23-1장 예제 4번
// 날 짜 :  2026년 11월 10일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef struct Point // 구조체 point 선언
{
    int xpos;
    int ypos;
}Point;

void swap_struct(Point p1, Point p2); // call-by-value 값만 복사하여 swap하는 구조 함수 선언

int main()
{
    Point pos1 = { 1, 2 };
    Point pos2 = { 3, 4 };
    Point temp;

    printf("pos1:[%d, %d], pos2:[%d, %d]\n",
        pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

    swap_struct(pos1, pos2); // call-by-value 값만 복사하여 swap하는 구조 함수 호출

     return 0;
}

void swap_struct(Point p1, Point p2) // call-by-value 값만 복사하여 swap하는 구조 함수 정의
{
    Point temp;

    temp = p1;
    p1 = p2;
    p2 = temp;

    printf("pos1:[%d, %d], pos2:[%d, %d]\n",
        p1.xpos, p1.ypos, p2.xpos, p2.ypos);

}
