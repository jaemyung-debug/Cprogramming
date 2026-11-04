// **********************************************
// 제 목 :  CH22-1장 예제 2번
// 날 짜 :  2026년 11월 4일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct student
{
	int num;
	char name[30];
	char adress[100];
};
int main()
{
	struct student s;
	printf("학번을 입력하시오: ");
	scanf("%d", &s.num);
	printf("이름을 입력하시오: ");
	scanf("%29s", s.name);

	getchar();

	printf("주소를 입력하시오; ");
	fgets(s.adress, sizeof(s.adress), stdin);

	printf("1. 학번: %d\n", s.num);
	printf("2. 이름: %s\n", s.name);
	printf("3. 주소: %s\n", s.adress);

	return 0;
}
