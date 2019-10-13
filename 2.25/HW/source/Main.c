#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("LLLLLLLLL\n");
	for (int a = 0; a < 4; a++)
	{
		puts("L");
	}
	for (int a = 0; a < 3; a++)
	{
		printf("\n");
	}
	printf("HHHHHHHHH\n");
	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 9; b++)
		{
			if (b== 4)
				printf("H");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("HHHHHHHHH\n\n");
	system("pause");
	return 0;
}