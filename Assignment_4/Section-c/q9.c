#include<stdio.h>
int calculate(int,int,char,double *);
int flag=0;
int main()
{
	int a,b;
	double *result,ret;
	char opr;

	printf("Enter first  number : ");
	scanf("%d",&a);
	printf("Ente a Operator : ");
	scanf("%*c%c",&opr);
	printf("Enter a second number : ");
	scanf("%d",&b);
	ret=calculate(a,b,opr,&result);
	if(flag==0)
	{
	printf("%lf",ret);
	}
	else
	{
	flag=0;
	}
	return 0;

}
int calculate(int a,int b,char opr,double *result)
{   
	switch(opr)
	{
		case '+':
			result=a+b;
			return result;

		case '-':
			result=a-b;
			return result;
		case '*':
			result=a*b;
			return result;

		case '/':
			if(b==0)
			{
				printf("Denominator zero");
				flag=1;
			}
			else
			{
				result=a/b;
			}	return result;
	}



}
