#include <stdio.h>

int main(void)
{
	int i, arr[5];

	printf("5���� ������ �Է��ϼ���: ");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	printf("Ȧ�� ���: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	}
	printf("\n");
	printf("¦�� ���: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
	
	return 0;
}
