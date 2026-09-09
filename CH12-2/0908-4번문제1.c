#include <stdio.h>
int main(void)
{
	int num1 = 20, num2 = 30;
	int* pi = NULL;

	pi = &num1;
	(*pi) += 2;

	pi = &num2;
	(*pi) -= 10;

	printf("%d*%d=%d\n", num1, num2, num1 * num2);

	return 0;
}
