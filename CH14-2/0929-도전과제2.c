// **********************************************
// 제 목 : CH14-2 도전과제 2번
// 날 짜 : 2026년 9월 29일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)
#include <stdio.h>
void hol(int arr[],int num, int*left);
void zak(int arr[],int num, int*right);
int main()
{
	int arr[10];
	int num;
    int left = 0;
    int right = 9;

	printf("10개의 숫자를 입력하시오: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);

        if (num % 2 != 0)
            hol(arr, num, &left);
        else
            zak(arr, num, &right);
    }

    printf("배열 요소 출력: ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void hol(int arr[], int num, int* left)
{
    arr[*left] = num;
    (*left)++;
}

void zak(int arr[], int num, int* right)
{
    arr[*right] = num;
    (*right)--;
}