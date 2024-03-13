#include<stdio.h>
int main()
{
int num,i=1;
char ch;
printf("Enter a number:");
scanf("%d",&num);
printf("Enter a character");
scanf("%*c%c",&ch);
while(i<=num)
{
printf("*");
i++;
}
}
