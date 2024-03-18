#include<stdio.h>
void prime(int n);
void prime(i t range);
int main()
{
	int n,range;

	printf("Enter a number : ");
	scanf("%d",&n);

	printf("Enter a number : ");
	scanf("%d",&range);

	prime(n);
	prime_range(range)
		return 0;
}
void prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(i==n)
	{

		printf("Number is prime");
	}
	else
	{

		printf("Number is not prime");

	}

}


void prime_range(int range)
{
	int x;
	while(range!=0)
	{
		for(i=2;i<x;i++)
		{

			if(x%i==0)
				break;

		}
		if(i==x)
		{
			printf("%d\n",x);
			range--;
		}
		x++;

}

}
