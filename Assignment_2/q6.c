#include<stdio.h>
int main()
{
int n,rev=0,temp,digit=0;
printf("Enter a number");
scanf("%d",&n);
temp=n;
while(n!=0)
{
digit=n%10;
rev=rev*10+digit;
n=n/10;
}
//printf("%d",rev);

if(temp==rev)
{
printf("The number is plindome");
}
else
{
printf("The number is not palindrome");
}
}
