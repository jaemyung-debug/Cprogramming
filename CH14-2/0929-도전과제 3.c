// **********************************************
// 제 목 : CH14-2 도전과제 3번
// 날 짜 : 2026년 9월 29일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void bubblesort(int ary[], int len);

int main()
{
    int arr[7];

    printf("숫자 7개를 입력하시오: ");

    for (int i = 0; i < 7; i++)
        scanf("%d", &arr[i]);

    bubblesort(arr, 7);

    printf("내림차순: ");

    for (int i = 0; i < 7; i++)
        printf("%d ", arr[i]);

    return 0;
}

void bubblesort(int ary[], int len)
{
    int temp;

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (ary[j] < ary[j + 1])
            {
                temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }
}