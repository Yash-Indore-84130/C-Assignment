#include<stdio.h>
int main()
{
int a,b,n,result;
printf("Enter a number:");
scanf("%d",&n);
printf("Enter a two number:");
scanf("%d %d",&a,&b);
for(int i=1;i<=n;i++)
{
result=a+b;
printf("%d\t",result);
a=b;
b=result;

}





}
