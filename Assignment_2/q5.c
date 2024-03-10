#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a three number");
scanf("%d %d %d",&a,&b,&c);

/*
if(a>b && a>c) 
{
printf("%d is greater",a);
}
else if(b>a && b>c)
{
printf("%d is grater ",b);
}
else
{
printf("%d is greater",c);
}
*/

//B] Conditonal operator

if( (a>b) ? printf("A is grater") : (b>c) ? printf("Bis greater") : printf("C is graeter"));
}

