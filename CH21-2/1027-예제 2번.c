// **********************************************
// 제   목 : CH21-2장 예제 1번
//    
// 날   짜 : 2026년 10월 27일
// 작성자: 2401486 신재명
// **********************************************
#include <stdio.h>
int main()
{
    char ch;

    while (1) // while문 조건 1로 항상 진행 
    {
        printf("문자입력: ");
        ch = getchar(); // getchar 선언

        if (ch == 'q' || ch == 'Q') // q,Q 만나면 종료
            break;

        printf("입력된 문자는 ");
        putchar(ch); // putchar ch 대입
        printf("\n");

        getchar(); // getchar 호출
    }

    return 0;
}