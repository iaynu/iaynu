#define _CRT_NO_SECURE_WARNINGS

#include <stdio.h>

int tenToTwo(int num)
{
	if()
	{

	}
	else
	{
		return num % 2 tenToTwo(num / 2)
	}
	

}
int main(void)
{
	int num;
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("%d�� �������� �ٲ� ���� %d \n", num, tenToTwo(num));
	return 0;
}