#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n1, n2;
	printf("輸入被除數與除數:");scanf_s("%d %d", &n1,&n2);
	printf("\n");
	if (n1%n2 == 0)
		printf("%d為%d的倍數\n", n1, n2);
	else
		printf("%d不為%d的倍數\n", n1, n2);
	system("pause");
	return 0;
}