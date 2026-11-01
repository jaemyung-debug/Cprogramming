//// **********************************************
//// 제 목 :  CH21-3장 예제 1번
//// 날 짜 :  2026년 10월 29일
//// 작성자 : 2401486 신재명
//// **********************************************
//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:6031)
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[1000] = ""; // 배열 str 선언 및 초기화
//	char input[100]; // 배열 input 선언
//
//	while (1) // 항상 실행 while문 
//	{
//		printf("문자열 입력: ");
//		scanf("%99s", input);
//
//		if (strcmp(input, "quit") == 0) //input 문자열이 quit 과 같으면 종료
//		{
//			break;
//
//		}
//
//		strcat(str, input); // 문자열 연결 호출
//		strcat(str, " "); // 문자열 연결 호출 할 때 필요한 띄어쓰기 칸 호출
//		printf("입력된 문자열: %s\n", str); // 출력
//	}
//
//	return 0;
//}