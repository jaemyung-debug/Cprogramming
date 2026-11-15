
// **********************************************
// 제 목 :  CH23-1장 예제 2번
// 날 짜 :  2026년 11월 10일
// 작성자 : 2401486 신재명
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef struct members // 구조체 학생 선언
{
    char name[30];
    int grade;

}MEM; // MEM으로 재선언

void get_data(MEM m[]); // 입력 함수 get_data 선언
MEM get_best(MEM m[]); // 최고 성적 가리는 get_best 및 정보 반환을 위한 함수 선언

int main()
{
    MEM m[3]; // 구조체 배열 3개 선언
    MEM first; // 구조체 반환을 위한 최고 성적 인원 구조체 선언

    get_data(m); // 입력 함수 get_data 호출
    first=get_best(m); // 최고 성적을 가리는 get_best 함수 호출 및 first로 반환

    printf("최우수학생의 이름은 %s, 점수는 %d", first.name, first.grade);

    return 0;
}

void get_data(MEM m[]) // 입력 함수 get_data 정의
{
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        printf("이름을 입력하시오: ");
        scanf("%29s", m[i].name);
        printf("성적을 입력하시오: ");
        scanf("%d", &m[i].grade);
    }
}
MEM get_best(MEM m[]) // get_best 함수 정의 
{
    int max = 0;
    int i = 0;
    for (i = 1; i < 3; i++)
    {
        if (m[i].grade > m[max].grade)
        {
            max = i;
        }
    }
    return m[max]; // 최고 성적 인원 구조체 반환
}
