#include<stdio.h>
int main()
{
int n,i;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
  printf("The table of %d X %d is = %d \n",n,i,(n*i));
  
}
}
