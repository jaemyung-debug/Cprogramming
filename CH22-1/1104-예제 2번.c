// **********************************************
// 제 목 :  CH22-1장 예제 2번
// 날 짜 :  2026년 11월 4일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct student // 구조체 학생 선언
{
	int num; // 구조체 학생 번호 선언
	char name[30]; // 구조체 학생 이름 선언
	char adress[100]; // 구조체 학생 주소 선언
};
int main()
{
	struct student s; // 구조체 학생 s 선언
	printf("학번을 입력하시오: ");
	scanf("%d", &s.num);
	printf("이름을 입력하시오: ");
	scanf("%29s", s.name);

	getchar(); // 입력 버퍼에 남아 있는 개행 문자('\n')를 제거

	printf("주소를 입력하시오; ");
	fgets(s.adress, sizeof(s.adress), stdin); // 공백이 포함된 문자열도 입력받을 수 있게 fgets 활용

	printf("1. 학번: %d\n", s.num);
	printf("2. 이름: %s\n", s.name);
	printf("3. 주소: %s\n", s.adress);

	return 0;
}
