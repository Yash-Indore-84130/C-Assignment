#include<stdio.h>
int fact(int n);
int main()
	
{
	int i,n,result;
	printf("Enter a number : ");
	scanf("%d",&n);
	result=fact(n);
	printf("The factorial of %d=%d",n,result);
	return 0;

}

int fact(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;

	}
	return fact;
}
