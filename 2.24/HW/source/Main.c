#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	printf("��J�ƭ�:");
	scanf_s("%d", &i);
	printf("\n");
	if (i % 2 == 0)
	{
		printf("���Ƭ�����");
	}
	else
		printf("���Ƭ��_��");
	printf("\n");
	system("pause");
	return 0;
}