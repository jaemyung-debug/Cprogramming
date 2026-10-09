
/* **********************************************
// 제 목 : CH19-1장 도전과제 1번
//
// 날 짜 : 2026년 10월 09일
// 작성자 : 2401486 신재명
// **********************************************/

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void rotate(int arr[][4])
{
    int tempt[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            tempt[i][j] = arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[j][3 - i] = tempt[i][j];
        }
    }
}

void print_array(int arr[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int arr[4][4] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9, 10, 11, 12,
        13, 14, 15, 16
    };

    print_array(arr);

    rotate(arr);
    print_array(arr);

    rotate(arr);
    print_array(arr);

    rotate(arr);
    print_array(arr);

    rotate(arr);
    print_array(arr);

    return 0;
}