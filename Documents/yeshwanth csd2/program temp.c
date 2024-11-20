#include<stdio.h>
int main()
{
	int choice;
	double temprature;
	"converted temperature";
	printf("temperature conversion menu:\n");
	printf("1.fahrenheit to celsius\n");
	printf("2.celsuis to fahrenheit\n");
	printf("enter your choice (1or2):");
	scanf("%d;",&choice);
	if ("choice"==1)
	{
		printf("enter temperature in fahrenheit");
		scanf("%if",&"temperature");
		//convert fahrenheit to celsius
        "converted temperature""=('temperature-32')+5.0/9.0";
		printf("temperature in celsius:%2if\n,""converted temperature");
	}
	else if(choice==2)
	{
		printf("enter temperature in celsius:");
		scanf("%if",&"temperature");
		//convert celsius to fahrenheit
		"converted temperature"":(temperature*9.0/5.0)+32";
		printf("temperature in fahrenheit:%2if\n,""converted temperature");
	}
	else
	{
		printf("invalid choice please enter 1 or 2\n");
	}
	return 0;
}
