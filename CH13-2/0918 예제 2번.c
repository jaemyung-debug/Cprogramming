// **********************************************
// 제 목 : CH13-2 2번 예제
// 날 짜 : 2026년 9월 18일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char arr[11]; // 문자열 배열 11칸 선언
	char*g = arr; // 포인터 G는 배열의 첫번째 주소

	printf("문자열을 입력하시오: ");
	scanf("%s",&arr);

	for (int i = 0; i < 11; i++) // 반복문
	{
		if (*(g + i) == '\0') // 반복문을 통해 코드를 돌리다가 빈 공간을 만나면 종료
			break;
		printf("%d번째 문자 %c \n", i, *(g+i));
	}

	return 0;
}