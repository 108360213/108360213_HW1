#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e;
	printf("一天總里程數:"); scanf_s("%f", &a);
	printf("\n汽油多少錢/加侖:"); scanf_s("%f", &b);
	printf("\n平均一加侖汽油行駛距離(公里):"); scanf_s("%f", &c);
	printf("\n一天停車費:"); scanf_s("%f", &d);
	printf("\n一天通行費:"); scanf_s("%f", &e);
	printf("\n一天總花費:%f", (double)a / c * b + d + e);
	printf("\n");
	system("pause");
	return 0;
}