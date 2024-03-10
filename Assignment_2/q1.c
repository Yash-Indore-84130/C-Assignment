#include<stdio.h>
int main()
{
int a,b,div;
printf("Enter a number");
scanf("%d %d",&a,&b);
if(b==0)
{
printf("denominator not be zero");
}
else
{
div=a/b;
printf("%d",div);
}
}
