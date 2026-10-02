// **********************************************
// 제 목 : CH16-1 2번 예제    
// 날 짜 : 2026년 10월 2일
// 작성자 : 2401486 신재명
/// ********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{	
	int arr[3][3];

	int max = 0;
	int sum = 0;
	int average[3];
	int student;
	int i,j;

	for (i = 0; i < 3; i++)
	{
		printf("%d번째 학생 성적을 입력하시오: ", i+1);
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}

	}
	for (i = 0; i < 3; i++)
	{
		sum = 0;

		for (j = 0; j < 3; j++)
		{
			sum += arr[i][j];

		}
		if (sum > max)
		{
			max = sum;
			student = i + 1;
		}
		average[i] = sum / 3;
	}

	printf("최우수 학생은 %d번째 학생이고 평균 점수는 %d이다. ", student, average[student-1]);
	return 0;
}