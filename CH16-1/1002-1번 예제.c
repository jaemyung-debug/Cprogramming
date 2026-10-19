// **********************************************
// 제 목 : CH16-1 1번 예제    
// 날 짜 : 2026년 10월 2일
// 작성자 : 2401486 신재명
/// ********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
	int arr1[2][2] = { {2,4},{5,-5} };
	int arr2[2][2] = { {-2,3},{0,-5} };
	int arr3[2][2] = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j]; // 배열끼리 게산
			printf("% d\t", arr3[i][j]);

			/* *(*(arr3 + i) + j) =
				*(*(arr1 + i) + j) + *(*(arr2 + i) + j);

			printf("%d\t", *(*(arr3 + i) + j)); */  // 포인터를 활용한 표현
		}
		printf("\n");
	}
	return 0;
}