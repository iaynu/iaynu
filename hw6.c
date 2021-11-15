#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int* fqtr = &arr1[0];
	int* bqtr = &arr2[0];
	int i, temp;

	for (i = 0; i < 6; i++)
	{
		temp = arr1;
		arr1[i] = arr2;
		arr2[i] = temp;
		
	}
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	return 0;
}