// **********************************************
// 제 목 : CH13-2 5번 예제
// 날 짜 : 2026년 9월 18일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char* fruits[] = { "apple", "blueberry", "orange", "melon" };
    int i = 0;

    for (int k = 1; k < 4; k++)
    {
        if (fruits[k][0] < fruits[i][0])
        {
            i = k;
        }
    }

    printf("사전에서 가장 앞에 나오는 문자열: %s\n", fruits[i]);


	return 0;
}
