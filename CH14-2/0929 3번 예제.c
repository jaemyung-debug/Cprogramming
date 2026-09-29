// **********************************************
// 제   목 : CH14-2 3번 예제
// 날   짜 : 2026년 9월29일
// 작성자 : 2401486 신재명
// *********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
void get_data(int data[]);
int main()
{
	int data[5];
	get_data(data);

	for (int i = 0; i < 5; i++)
	{
		printf(" % d번째 data : % d \n", i + 1, data[i]);
	}

	return 0;
}
void get_data(int data[])
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 data를 입력하시오: ",i+1);
		scanf("%d", &data[i]);

	}
}