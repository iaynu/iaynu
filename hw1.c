#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int result1, result2, result3;
	int num1, num2;

	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);

	result1 = num1 & num2;
	result2 = num1 | num2;
	result3 = num1 ^ num2;

	printf("%d & %d = %d \n", num1, num2, result1);
	printf("%d | %d = %d \n", num1, num2, result2);
	printf("%d ^ %d = %d \n", num1, num2, result3);
	return 0;
}