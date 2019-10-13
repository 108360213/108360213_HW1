#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	printf("块计:");
	scanf_s("%d", &i);
	printf("\n");
	if (i % 2 == 0)
	{
		printf("计案计");
	}
	else
		printf("计计");
	printf("\n");
	system("pause");
	return 0;
}