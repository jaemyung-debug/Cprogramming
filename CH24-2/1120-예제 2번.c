// **********************************************
// 제 목 :  CH24-2장 예제 2번
// 날 짜 :  2026년 11월 20일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	char name[30]; // 이름 받을 배열 선언
	int n1,n2,n3; // 성적 3가지 종류 선언
	int sum; // 합 받을 변수 선언
	double avg; //  평균 구하는 변수 선언
	int i; //  반복문을 위한 변수 선언
	FILE* fp; // 구조체 파일을 가르키는 포인터 선언
	FILE* fp2; // 구조체 파일을 가르키는 포인터2 선언

	fp = fopen("input.txt", "r"); // input.txt 파일을 읽기모드로 열고 변수에 저장

	if (fp == NULL) // 변수가 NULL 값이면 오류로 반환
	{
		printf("파일 열기 실패!\n");
		return 1;
	}

	fp2 = fopen("output.txt", "w"); // output.txt 파일 쓰기 모드로 열고 변수2에 저장

	if (fp2 == NULL) //  변수가 NULL 값이면 오류로 반환 및 열린 파일 닫기
	{
		printf("결과 파일 열기 실패!\n");
		fclose(fp);
		return 1;
	}
	for (i = 0; i < 3; i++) // 반복문으로 세 명 값 모두 적용
	{
		fscanf(fp, "%29s %d %d %d", name, &n1, &n2, &n3); // 파일에 이름 성적 입력
				
		sum = n1 + n2 + n3;
		avg = sum / 3.0;

		fprintf(fp2, "%s %d %.1f\n", name, sum, avg); // 파일에 결과 출력
	}

	fclose(fp);
	fclose(fp2);

	return 0;
}