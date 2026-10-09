// **********************************************
// 제 목 : CH19-1 예제 2번 매개변수에 void 포인터
//    
// 날 짜 : 2026년 10월08일
// 작성자 : 2401486 신재명
// *********************************************
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
void print_value(void* p)
{
    printf("%d\n", *(int*)p);
}
int main()
{
    int a = 10;

    print_value(&a);

    return 0;
}