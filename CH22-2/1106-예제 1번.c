// **********************************************
// 제 목 :  CH22-2장 예제 1번
// 날 짜 :  2026년 11월 6일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct student { // 구조체 배열 학생 선언
	char name[30]; // 구조체 배열 학생 이름 선언
	int grade; // 구조체 배열 학생 성적 선언
};
int main()
{
	struct student s[3]; // 구조체 배열 학생 호출
	int max = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: ");
		scanf("%29s", s[i].name);
		printf("성적을 입력하시오; ");
		scanf("%d", &s[i].grade);
	}

	for (int i = 1; i < 3; i++)
	{
		if (s[i].grade > s[max].grade) // 성적 최댓값 비교 
		{
			max = i; 
		}
	}

	printf("최우수 학생의 이름은 %s, 점수는 %d\n", s[max].name, s[max].grade);

	return 0;
}