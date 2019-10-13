#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i = 5;
	for (int a = 1; a <= i; a++)
	{
		for (int b = i; b > a; b--)
		{
			printf(" ");
		}
		for (int c = 1; c <= a * 2 - 1; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}