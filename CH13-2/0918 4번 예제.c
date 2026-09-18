// **********************************************
// 제 목 : CH13-2 4번 예제
// 날 짜 : 2026년 9월 18일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char arr1[100];
	char arr2[100];
	int i = 0;
	int count = 0;

	printf("첫 번째 문자열을 입력하시오:");
	scanf("%s", arr1);

	printf("두 번째 문자열을 입력하시오:");
	scanf("%s", arr2);

	while (arr1[i] != '\0' && arr2[i] != '\0')
	{
		if (arr1[i] < arr2[i])
		{
			count = 1;
			break;
		}
		else if (arr1[i] > arr2[i])
		{
			count = 2;
			break;
		}

		i++ ;

	}
	if (count == 1)
	{
		printf("사전에서 앞에 나오는 문자열: %s\n", arr1);
	}
	else if (count == 2)
	{
		printf("사전에서 앞에 나오는 문자열: %s\n", arr2);
	}
	else
	{
		
		if (arr1[i] == '\0' && arr2[i] != '\0')
		{
			printf("사전에서 앞에 나오는 문자열: %s\n", arr1);
		}
		else if (arr1[i] != '\0' && arr2[i] == '\0')
		{
			printf("사전에서 앞에 나오는 문자열: %s\n", arr2);
		}
		else
		{
			printf("두 문자열이 같습니다.\n");
		}
	}

	
	return 0;
}