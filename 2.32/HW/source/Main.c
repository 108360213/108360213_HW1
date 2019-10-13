#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b;
	double c;
	printf("輸入身高(公尺)和體重(公斤):");
	scanf_s("%f %f", &a, &b);
	printf("\n你的BMI為:%f\n",(double)b/(a*a));
	c = b / (a*a);
	if (c < 18.5)
		printf("you are underweight\n");
	else if (25 <= c&& c<= 29.9)
		printf("you are overweight\n");
	else if (c >= 30)
		printf("you are obese\n");
	system("pause");
	return 0;
}