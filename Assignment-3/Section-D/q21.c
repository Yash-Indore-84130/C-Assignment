#include<stdio.h>
int main()
{

	int i,x,n;
	printf("Enter a number : ");
	scanf("%d",&n);

	while(n!=0)
	{
		for(i=2;i<x;i++)
		{

			if(x%i==0)
				break;

		}
		if(i==x)
		{
			printf("%d\n",x);
			n--;
		}
		x++;


	}




}
