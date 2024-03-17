#include<stdio.h>
int main()
{


	int a,b,rem,x,sum;
	printf("Enter a number   : ");
	scanf("%d %d",&a,&b);

	for(int i=a;i<=b;i++)
	{
		
		sum=0;
		x=i;
		while(x!=0)
		{
			rem=x%10;
			sum=sum+(rem*rem*rem);
			x=x/10;
		}
		if(i==sum)
		{
			printf("%d\t",i);
		}
	}
}
