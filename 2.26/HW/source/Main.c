#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n1, n2;
	printf("块砆埃计籔埃计:");scanf_s("%d %d", &n1,&n2);
	printf("\n");
	if (n1%n2 == 0)
		printf("%d%d计\n", n1, n2);
	else
		printf("%dぃ%d计\n", n1, n2);
	system("pause");
	return 0;
}