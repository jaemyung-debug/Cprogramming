// **********************************************
// 제 목 :  CH22-1장 예제 4번
// 날 짜 :  2026년 11월 4일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct rectangle // 구조체 사각형 선언
{
	int x; // 구조체 사각형 x 좌표 선언
	int y; // 구조체 사각형 y 좌표 선언
};

int main()
{
	struct rectangle left; // 구조체 사각형 왼쪽 선언
	struct rectangle right; // 구조체 사각형 오른쪽 선언
	
	int width = 0; // 넓이 선언
	int high = 0; // 높이 선언

	printf("좌측상단의 좌표 입력: ");
	scanf("%d %d", &left.x, &left.y);
	printf("우측상단의 좌표 입력: ");
	scanf("%d %d", &right.x, &right.y);

	width = right.x - left.x; // 넓이=오른쪽 x - 왼쪽 x
	high = right.y - left.y; // 높이=오른쪽 y - 왼쪽  y

	printf("사각형의 폭: %d\n", width);
	printf("사각형의 높이: %d", high);

	return 0;
}