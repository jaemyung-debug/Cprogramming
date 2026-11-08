// **********************************************
// 제 목 :  CH22-2장 예제 2번
// 날 짜 :  2026년 11월 6일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct student // 학생 구조체 변수 선언
{
	char name[30]; // 학생 구조체 변수 학생 이름 선언
	int grade; // 학생 구조체 변수 학생 성적 선언
};
int main()
{
	struct student s[3]; // 학생 구조체 변수 배열 호출
	int i = 0;
	int min = 0;

	for (i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: ");
		scanf("%29s", s[i].name);
		printf("성적을 입력하시오: ");
		scanf("%d", &s[i].grade);
	}
	for (i = 1; i < 3; i++)
	{
		if (strcmp(s[i].name, s[min].name) < 0) // strcmp 로 문자열1이 문자열2 앞에 있으면 최솟값(min)에 i 값 대입
		{
			min = i;
		}

	}
	printf("\n");
	printf("이름은 %s, 성적은 %d\n", s[min].name, s[min].grade);

	return 0;
}

