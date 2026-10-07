#define _CRT_NO_SECURE_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
void MaxAndmin(int arr[], int a, int** maxPtr, int** minPtr);
int main()
{
	int* maxPtr;
	int* minPtr;
	int arr[5] = {100,50,2,10,3};

	MaxAndmin(arr, 5, &maxPtr, &minPtr);

	printf("ÃÖ´ñ°ª: %d\n", *maxPtr);
	printf("ÃÖ¼Ú°ª: %d", *minPtr);

	return 0;
}
void MaxAndmin(int arr[],int a, int**maxPtr,int**minPtr)
{
	*maxPtr = &arr[0];
	*minPtr = &arr[0];

	for (int i = 1; i < a; i++)
	{
		if (arr[0] > arr[i])
		{
			*maxPtr = &arr[i];
		}
		if (arr[0] < arr[i])
		{
			*minPtr = &arr[i];
		}
	}
}