#include<stdio.h>
int calculator(int,char,int);

int flag;

int main()
{
	int num1,num2,result;
	char opr,choice;
	do{
		printf("Enter a number1 : ");
		scanf("%d",&num1);
		printf("Enter a operator : ");
		scanf("%*c%c",&opr);
		printf("enter a number 2 : ");
		scanf("%d",&num2);
		result=calculator(num1,opr,num2);

		if(flag==0)
		{
			printf("%d\n",result);
		}
		else
		{
			flag=0;
		}

		printf("Do you want continue ? (y/n): ");
		scanf("%*c%c",&choice);

	}while(choice!='n' || choice!='N');







}
int calculator(int num1,char opr,int num2)
{
	int result;
	switch(opr)
	{
		case'+':
			result=num1+num2;
			break;
		case'-':
			result=num1-num2;
			break;
		case'*':
			result=num1*num2;
			break;
		case'/':
			if(num2!=0)
			{
				result=num1/num2;
			}
			else
			{

				printf("The denominator is zero\n");
				flag=1;

			}

			break;
		default:
			printf("Invalid opertor");
	}
	return result;



}

