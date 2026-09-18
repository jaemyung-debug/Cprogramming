// **********************************************
// 제 목 : CH13-2 3번 예제
// 날 짜 : 2026년 9월 18일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char arr[100];
    int i = 0;

    printf("문자열을 입력하시오:");
    scanf("%s", arr);
    while (1)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] + 32;
        }
        i++;

        if(arr[i] == '\0')
           break;
    }   
    printf("변환된 문자열: %s\n", arr);


	return 0;
}