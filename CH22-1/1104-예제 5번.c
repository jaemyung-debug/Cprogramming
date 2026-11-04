// **********************************************
// 제 목 :  CH22-1장 예제 5번
// 날 짜 :  2026년 11월 4일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct point // 구조체 포인트 선언
{
	int x; // 구조체 포인트 x 선언
	int y; // 구조체 포인트 y 선언
};
int main(void)
{
	struct point p1 = { 10,10 }, p2 = { 20,20 }; // 구조체 포인트 p1 선언 및 초기화
	struct point temp; // 구조체 포인트 temp 선언

	printf("교환전P1의좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환전P2의좌표: (%d, %d)\n", p2.x, p2.y);
	
	temp = p1; // p1의 값을 temp에 저장
	p1 = p2; // p2의 값을 p1에 저장
	p2 = temp; // temmp 값 p2에 저장

	printf("교환후P1의좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환후P2의좌표: (%d, %d)\n", p2.x, p2.y);

	return 0;
}