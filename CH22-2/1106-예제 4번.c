// **********************************************
// 제 목 :  CH22-2장 예제 4번
// 날 짜 :  2026년 11월 6일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct point // 점의 좌표를 저장하는 구조체 정의
{
    int x;
    int y;
};

int main()
{
    struct point p[3]; // 3개의 점을 저장하는 구조체 배열
    int a, b, c;
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("%d번째 점 (x,y) 입력: ", i + 1);
        scanf("%d %d", &p[i].x, &p[i].y);
    }

    // 첫 번째 점과 두 번째 점 사이 거리의 제곱
    a = (p[0].x - p[1].x) * (p[0].x - p[1].x)
        + (p[0].y - p[1].y) * (p[0].y - p[1].y);

    // 두 번째 점과 세 번째 점 사이 거리의 제곱
    b = (p[1].x - p[2].x) * (p[1].x - p[2].x)
        + (p[1].y - p[2].y) * (p[1].y - p[2].y);

    // 첫 번째 점과 세 번째 점 사이 거리의 제곱
    c = (p[0].x - p[2].x) * (p[0].x - p[2].x)
        + (p[0].y - p[2].y) * (p[0].y - p[2].y);

    if (a + b == c)
    {
        printf("삼각형은 직각삼각형임\n");
    }
    else if (a + c == b)
    {
        printf("삼각형은 직각삼각형임\n");
    }
    else if (b + c == a)
    {
        printf("삼각형은 직각삼각형임\n");
    }
    else
    {
        printf("삼각형은 직각삼각형 아님\n");
    }

    return 0;
}