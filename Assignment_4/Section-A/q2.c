#include<stdio.h>
int power(int,int);
int main()
{
int base,index;
printf("Enter base value : ");
scanf("%d",&base);
printf("Enter index value : ");
scanf("%d",&index);
printf("The Result of %d ^ %d is: %d",base,index,power(base,index));
return 0;

}
int power(int base,int index)
{
int ret=1;
for(int i=1;i<=index;i++)
{
ret=ret*base;

}
return ret;
}
