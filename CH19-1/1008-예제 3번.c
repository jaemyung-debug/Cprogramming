#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);
int cal(int a, int b, int (*f1)(int, int));

int main()
{
    int a, b;
    int num;
    int (*fp)(int, int) = NULL;

    printf("연산을 선택하시오: ");
    scanf("%d", &num);

    if (num == 1)
        fp = add;
    else if (num == 2)
        fp = sub;
    else if (num == 3)
        fp = mul;
    else if (num == 4)
        fp = divide;
    else
    {
        printf("잘못된 연산입니다.");
        return 0;
    }

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &a, &b);

    printf("결과값: %d\n", cal(a, b, fp));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int cal(int a, int b, int (*f1)(int, int))
{
    return f1(a, b);
}