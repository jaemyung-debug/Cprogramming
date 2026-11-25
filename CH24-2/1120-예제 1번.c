// **********************************************
// 제 목 :  CH24-2장 예제 1번
// 날 짜 :  2026년 11월 20일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	char name[30]; // 이름 입력 받는 배열 선언
	int num; // 학번 받는 정수 선언
	double grade; // 성적 받는 실수 선언
	int i; // 반복문을 위한 변수 선언
	FILE* fp; // 파일 구조체를 가르키는 포인터 선언

	fp = fopen("result.txt", "w"); // 파일 result.txt를 열고 읽기모드 실행 변수 fp에 저장

	if (fp == NULL) // fp 값이 NULL 이면 파일 열기 실패
	{
		printf("파일 열기 실패!\n");
		return 1; // 오류 발생으로 프로그램 종료
	}
	
	for (i = 0; i < 3; i++) // 세 명의 값 받기
	{
		printf("이름, 학번, 학점 입력: ");
		scanf("%29s %d %lf", name, &num, &grade);

		fprintf(fp, "%s %d %.1f\n", name, num, grade); // 파일에 입력 받은 정보 저장
	}

	fclose(fp); // 파일 닫기

	return 0;
}