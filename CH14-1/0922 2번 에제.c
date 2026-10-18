// **********************************************
// 제   목 : CH14-2 2번 예제
//    
// 날   짜 : 2026년 9월22일
// 작성자 : 2401486 신재명
// *********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include <stdio.h>
void add2(int* value); // add2 함수 선언
int main()
{
	int number;
	
	printf("정수를 입력하시오: "); // 정수를 입력하시오 출력
	scanf("%d", &number); // 입력 받은 숫자 number 저장

	add2(&number); // add2 함수 대입
	
	printf("2만큼 증가한 값: %d\n", number);
	
	return 0;
}
void add2(int* value)
{
	*value += 2; // 값 2 증가
}