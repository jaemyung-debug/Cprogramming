
// **********************************************
// 제 목 :  CH23-1장 예제 1번
// 날 짜 :  2026년 11월 10일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef struct student // 구조체 학생 선언
{
    int num;
    char name[30];
    char adress[100];

}STD; // typedet STD로 재선언

STD get_data(STD s); // 입력 함수 get_data 선언
void put_data(STD s); // 출력 함수 put_data 선언

int main()
{
    STD s = { 0 };

    s = get_data(s); // 입력 함수 get_data 호출
    put_data(s); // 출력 함수 put_data 호출

    return 0;
}

STD get_data(STD s) // 입력 함수 get_data 정의
{
    printf("학번을 입력하시오: ");
    scanf("%d", &s.num);

    printf("이름을 입력하시오: ");
    scanf("%29s", s.name);

    getchar(); // 입력 버퍼에 남아있는 줄 바꿈 기호 제거

    printf("주소를 입력하시오: ");
    fgets(s.adress, sizeof(s.adress), stdin); // 공백 포함하여 문자열 받는 fgets 활용 길이는 입력받은 사이즈만큼 저장

    return s;
}

void put_data(STD s) // 출력 함수 put_data 정의
{
    printf("\n");
    
    printf("1. 학번: %d\n", s.num);
    printf("2. 이름: %s\n", s.name);
    printf("3. 주소: %s", s.adress);
}
