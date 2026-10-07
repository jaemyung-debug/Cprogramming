// **********************************************
// 제 목 : CH17-1 예제 3번
//    
// 날 짜 : 2026년 10월 6일
// 작성자 : 2401486 신재명
// *********************************************

#define _CRT_NO_SECURE_WARNINGS_
#pragma warning (disable:6031)
#include <stdio.h>
int get_max(int* ptrarr[], int big);
int main(void)
{
    int num1 = 50, num2 = 20, num3 = 30;
    int* ptrarr[3] = { &num1, &num2, &num3 };
    int max;

    max = get_max(ptrarr, 3);

    printf("최댓값: %d\n", max);

    return 0;
}

int get_max(int* ptrarr[], int big)
{
    int max = *ptrarr[0];

    for (int i = 1; i < big; i++)
    {
        if (*ptrarr[i] > max)
        {
            max = *ptrarr[i];
        }
    }

    return max;
}