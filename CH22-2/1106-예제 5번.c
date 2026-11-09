// **********************************************
// 제 목 :  CH22-2장 예제 5번
// 날 짜 :  2026년 11월 6일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
struct student // 구조체 학생 정의
{
	int grade; // 구조체 학생 성정 정의
	char name[30]; // 구조체 학생 이름 정의
};
int main()
{
	struct student s[3]; // 구조체 배열 선언
	struct student* p = s; // 구조체 포인터 선언
	int i = 0;
	int max = 0;
	for (i = 0; i < 3; i++)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &(p+i)->grade);
		printf("이름을 입력하시오: ");
		scanf("%29s", (p+i)->name);
	}
	for (i = 1; i < 3; i++)
	{
		if ((p+i)->grade > (p+max)->grade) // 최댓값 구하는 알고리즘 활용하여 포인터로 성적 불러외서 비교 후 큰 값 max에 저장 
		{
			max = i;
		}
	}
	printf("\n");
	printf("최우수 성적은 %d이고 학생은 %s 입니다.",(p+max)->grade,(p+max)->name);

	return 0;
}