#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n1, n2;
	printf("��J�Q���ƻP����:");scanf_s("%d %d", &n1,&n2);
	printf("\n");
	if (n1%n2 == 0)
		printf("%d��%d������\n", n1, n2);
	else
		printf("%d����%d������\n", n1, n2);
	system("pause");
	return 0;
}