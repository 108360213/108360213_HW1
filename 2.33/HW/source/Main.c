#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e;
	printf("�@���`���{��:"); scanf_s("%f", &a);
	printf("\n�T�o�h�ֿ�/�[��:"); scanf_s("%f", &b);
	printf("\n�����@�[�ڨT�o��p�Z��(����):"); scanf_s("%f", &c);
	printf("\n�@�Ѱ����O:"); scanf_s("%f", &d);
	printf("\n�@�ѳq��O:"); scanf_s("%f", &e);
	printf("\n�@���`��O:%f", (double)a / c * b + d + e);
	printf("\n");
	system("pause");
	return 0;
}