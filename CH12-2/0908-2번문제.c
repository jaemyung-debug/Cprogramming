#include <stdio.h>

int main(void)
{
    int a = -100;
    char b = 'A';
    double c = 3.14;

    int* pa = &a;
    char* pb = &b;
    double* pc = &c;

    printf("a = %d\n", *pa);
    printf("b = %c\n", *pb);
    printf("c = %lf\n", *pc);

    return 0;
}