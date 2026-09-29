// **********************************************
// 제 목 : CH14-2 2번 예제
// 날 짜 : 2026년 9월29일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지

#include <stdio.h>
void get_max(int* array, int* max);
int main()
{
    int arr[5];
    int max;

    printf("숫자를 입력하시오: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    get_max(arr,&max);
    printf("최대값은 %d입니다. ", max);

    return 0;
}
void get_max(int* array, int* max)
{
    int i;
    int big;

    big = array[0];

    for (i = 1; i < 5; i++)
    {
        if (array[i] > big)
            big = array[i];
    }

    *max = big;
}