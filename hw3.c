#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, i, j = 0;
	
	printf("plese enter a number: ");
	scanf("%d", &num);

	for(int i = 2;i < num; i++)
	{
		if (num % i == 0)
			j = 1;
			break;
	}

	if (j == 1)
		printf("It is not a prime number.");
	else
		printf("It is a prime number.");

	return 0;
}