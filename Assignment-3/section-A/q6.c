#include<stdio.h>
int main()
{
int n,i=1;;
printf("Enter a number:");
scanf("%d",&n);
int temp=n;
while(i<=temp)
{
if(n%i==0)
{
printf("%d\n",i);

}
i++;

}
}
