#include<stdio.h>
#include<conio.h>
int main()
{
	float height,bmi;
	char name;
	int weight;
	printf(" Enter your name ");
	scanf("%s",&name);
	printf("\n Enter your height (in m)  ");
	scanf("%f",&height);
	printf("\n Enter your weight (in kg) ")
	scanf("%d",&weight);
	bmi=weight/(height**2);
	if(bmi<18.5)
		printf("%S\t%f\tUnderweight",name,bmi);
	else if(bmi>=1.8&&bmi<=24.9)
		printf("%S\t%f\tNormal",name,bmi);
	else if(bmi>=25&&bmi<=29.9)
		printf("%S\t%f\tOverweight",name,bmi);
	else
		printf("%S\t%f\tObese",name,bmi);
}
