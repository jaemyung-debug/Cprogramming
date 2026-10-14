// **********************************************
// 제 목 : CH13-2 4번 예제
// 날 짜 : 2026년 9월 18일
// 작성자 : 2401486 신재명
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    char arr1[100]; // 첫 번째 문자열 100칸 선언
    char arr2[100]; // 두 번째 문자열 100칸 선언
    char* a1 = arr1; // a1 포인터가 arr1의 첫 번째 주소를 가르킴
    char* a2 = arr2; // a2 포인터가 arr2의 두 번째 주소를 가르킴
    char* first; // 문자열 변수 추가 선언
    int i = 0; // 반복문에 들어갈 변수 선언

    printf("첫 번째 문자열을 입력하시오: ");
    scanf("%99s", arr1);

    printf("두 번째 문자열을 입력하시오: ");
    scanf("%99s", arr2);

    while (1) // while문 선언 
    {
        if (*(a1 + i) < *(a2 + i)) // arr1의 첫 번째 주소 값이 arr2 보다 작으면 실행
        {
            first = arr1; // first 변수에 arr1 저장
            break;
        }
        else if (*(a1 + i) > *(a2 + i)) // arr1의 첫 번째 주소 값이 arr2 보다 크면 실행
        {
            first = arr2; // first 변수에 arr2 저장
            break;
        }

        if (*(a1 + i) == '\0' && *(a2 + i) == '\0') // arr1과 arr2이 모두 \0으로 끝나면 종료
        {
            first = arr1;
            break;
        }
        i++;
    }

    printf("사전에서 앞에 나오는 문자열: %s\n", first);

    return 0;
}