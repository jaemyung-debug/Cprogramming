// **********************************************
// 제 목 :  CH23-2장 예제 2번
// 날 짜 :  2026년 11월 13일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
struct student // 구조체 학생 선언
{
	char name[30];
	int num;
	int kor;
	int eng;
	int math;
};
struct student get_best(struct student student[]); // 평균이 높은 학생 찾는 함수 선언
int main()
{ 
	struct student student[3]; // 구조체 배열 선언
	struct student first; // 최우수 학생 저장 할 변수 선언

	int i = 0;

	for (i = 0; i < 3; i++)
	{
		printf("이름: ");
		scanf("%29s", student[i].name);
		printf("학번:");
		scanf("%d", &student[i].num);
		printf("국어:");
		scanf("%d", &student[i].kor);
		printf("영어:");
		scanf("%d", &student[i].eng);
		printf("수학:");
		scanf("%d", &student[i].math);
	}
	first = get_best(student); // 최우수 학생 찾는 함수 호출 및 변수에 저장 

	printf("< 최우수 학생정보 >\n");
	printf("%s %d %d %d %d %lf", first.name, first.num, first.kor, first.eng, first.math,(first.kor + first.eng + first.math)/3.0 );

	return 0;
}
struct student get_best(struct student student[]) // 최우수 학생 찾는 함수 정의
{
	int i;
	int max = 0;

	for (i = 1; i < 3; i++) // 최우수 학생 찾는 반복문
	{
		if ((student[i].math + student[i].eng + student[i].kor) / 3.0 > (student[max].math + student[max].eng + student[max].kor) / 3.0)
		{
			max = i;
		}
	}

	return student[max]; // 평균 높은 학생을 구조체 반환
}
