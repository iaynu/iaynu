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
	printf("양의 정수를 입력하시오: ");
	scanf("%d", &num);
	printf("%d를 이진수로 바꾼 값은 %d \n", num, tenToTwo(num));
	return 0;
}