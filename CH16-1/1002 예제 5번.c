// **********************************************
// 제 목 : CH16-1 4번 예제    
// 날 짜 : 2026년 10월 2일
// 작성자 : 2401486 신재명
/// ********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
    char str[4][10];
    int i, j;
    int max = 0;

    
    for (i = 0; i < 4; i++)
    {
        printf("%d번째 문자열 입력: ", i + 1);
        scanf("%s", str[i]);
    }

    for (i = 1; i < 4; i++)
    {
        j = 0;

        while (str[i][j] == str[max][j] && str[i][j] != '\0')
        {
            j++;
        }

        if (str[i][j] > str[max][j])
        {
            max = i;
        }
    }

    printf("사전에서 제일 뒤에 나오는 문자열: %s\n", str[max]);

    return 0;
}