#include<stdio.h>
int main()
{
int a,b,rem;
printf("Enter two number:");
scanf("%d %d",&a,&b);
while(rem!=0)
{
rem=a%b;
a=b;
b=rem;
printf("%d",b);
}

}
