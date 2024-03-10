#include<stdio.h>
int main()
{
int a,b,ans;
char op;
printf("Enter a number:");
scanf("%d",&a);

printf("Enter a operator");
scanf("%*c%c",&op);


printf("Enter a number:");
scanf("%d",&b);

switch(op)
{
case '+' : ans=a+b;
			printf("ans: %d\n",ans);
			break;
case '-' : ans=a-b;
			printf("ans:%d\n",ans);
			break;
case '*' : ans=a*b;
			printf("ans:%d\n",ans);
			break;
case '/' : 		
                        if(b!=0)
			{
	                ans=a/b;
			printf("ans:%d\n",ans);
			}
			else
			{
			printf("cannot div by 0\n");
			}
			break;

default : printf("Invalid Operand \n");
          break;
}
}








