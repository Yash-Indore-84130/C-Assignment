#include<stdio.h>
int main()
{
int num,digit;
printf("Enter a number:\n");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
printf("%d\t",digit);
num=num/10;
}
}

