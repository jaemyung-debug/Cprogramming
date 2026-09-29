# 실습 과제 1
- 주소에 의한 호출을 사용해야하는 3가지 경우를 설명하라
>

- 최대값 구하는 알고리즘을 설명하라
>

- const 선언을 사용하는 이유를 설명 하시오.
>

# 실습 과제 2
// **********************************************
// 제 목 : CH14-2 2번 예제
// 날 짜 : 2026년 9월29일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지

#include <stdio.h>
void get_max(int*array, int*max);
int main()
{
	int arr[5];
	int max;

	printf("숫자를 입력하시오: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    get_max(&max, arr);
	printf("최대값은 %d입니다. ", max);

	return 0;
}
void get_max(int*array, int*max)
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
# 실습 과제 3

# 실습 과제 4

# 실습 과제 5

# 실습 과제 6
