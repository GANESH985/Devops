#include <stdio.h>
int main  ()
{
	double num1,num2,num3;
	double sum,average;
	printf("enter the second number");
	scanf("%1f,&num1");
	printf("enter the second number");
	scanf("%1f,&num2");
	printf("enter the third number");
	scanf("%1f,&num3");
	sum=num1+num2+num3;
	average=sum/3.0;
	printf("sum=%21f/n",average);
	printf("average=%21f/n",average);
	return 0;
}

