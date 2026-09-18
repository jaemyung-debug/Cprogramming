// **********************************************
// 제 목 : CH13-2 2번 예제
// 날 짜 : 2026년 9월 18일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char arr[100];
	int i = 0;
	printf("문자열을 입력하시오 :");
	scanf("%s", arr);
	
	while (1)
	{
		printf("%d 번째 문자: %c\n", i+1, arr[i]);
		i++;
		if (arr[i] == '\0')
		{
			break;
		}
	}

	return 0;
}