#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n1, n2, n3,temp;
	printf("��J�T����� :");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	int a[3] = { n1,n2,n3 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			if (a[j + 1] < a[j])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("�̤j�Ȭ�: %d\n", a[2]);
	printf("�̤p�Ȭ�: %d", a[0]);
	printf("\n");
	system("pause");
	return 0;
}