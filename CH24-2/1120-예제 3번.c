// **********************************************
// 제 목 :  CH24-2장 예제 3번
// 날 짜 :  2026년 11월 20일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef struct student // 성적 비교는 직접적으로 할 수 없어 모든 학생 성적을 저장하는 구조체로 
{
	char name[30];
	int sum;
	double avg;


}STUDENT; // 구조체 학생 선언

int main()
{
    STUDENT s[3]; // 학생 3명 값 저장을 위한 구조체 선언
    STUDENT temp; // 최댓값 비교를 위한 구조체 선언
    int n1, n2, n3; // 성적 변수 선언
    int i, j; // 성적 비교를 위한 변수 선언

    FILE* fp;
    FILE* fp2;

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

	for (i = 0; i < 3; i++) // 학생 정보 3명 저장을 위한 반복문
	{
		fscanf(fp, "%29s %d %d %d", s[i].name, &n1, &n2, &n3); // 학생 정보 파일에 압력

		s[i].sum = n1 + n2 + n3;
		s[i].avg = s[i].sum / 3.0;
	}

	for (i = 0; i < 2; i++) // 학생 3명의 성적 비교를 위한 이중반복문
	{
		for (j = i + 1; j < 3; j++)
		{
			if (s[i].sum < s[j].sum)
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	for (i = 0; i < 3; i++) // 성적 순으로 출력하기 위해 쓰는 반복문
	{
		fprintf(fp2, "%d등: %s %d %.1f\n",
			i + 1, s[i].name, s[i].sum, s[i].avg);
	}

	fclose(fp);
	fclose(fp2);

	return 0;
}