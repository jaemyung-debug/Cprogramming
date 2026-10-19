// **********************************************
// 제 목 : CH16-1 2번 예제    
// 날 짜 : 2026년 10월 2일
// 작성자 : 2401486 신재명
/// ********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
    int arr1[3][3]; 
    int max = -1, std = 0, sum = 0;
    int arr2[3];

    for (int i = 0; i < 3; i++)
    {
        printf("%d번째 학생의 국어,영어,수학 성적을 입력: \n", i + 1);

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]); // i번째 학생의 j번째 과목 점수 입력
        }
    }

    for (int i = 0; i < 3; i++)
    {
        sum = 0; // 다음 학생의 총점을 계산하기 위해 합계 초기화

        for (int j = 0; j < 3; j++)
        {
            sum += arr1[i][j]; // i번째 학생의 3과목 점수를 누적
        }

        arr2[i] = sum / 3; // i번째 학생의 평균 점수를 배열에 저장

        // 현재 학생의 총점이 기존 최고 총점보다 큰 경우
        if (sum > max)
        {
            max = sum; // 최고 총점을 현재 학생의 총점으로 변경
            std = i + 1; // 최우수 학생의 번호 저장 (1번부터 시작)
        }
    }

    printf("최우수 학생은 %d번째 학생이고 평균 점수는 %d이다.\n",
        std, arr2[std - 1]);

    return 0;
}