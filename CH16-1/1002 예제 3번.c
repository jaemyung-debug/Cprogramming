// **********************************************
// 제 목 : CH16-1 3번 예제    
// 날 짜 : 2026년 10월 2일
// 작성자 : 2401486 신재명
/// ********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
	int arr[3][3] = { {-5,2,35},{-20,5,100},{-75,5,-25} };
	int i, j;
	int max = arr[0][0];
	int max_i, max_j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				max_i = i+1;
				max_j = j+1;
			}
		}
	}
	printf("최댓값은 %d\n 위치는 %d행 %d열이다. ", max,max_i,max_j);

	return 0;
}