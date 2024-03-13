#include<stdio.h>
int main()
{
int base,index,result=1;
printf("Enter a base and index values:");
scanf("%d %d",&base,&index);
for(int i=1;i<=index;i++)
{
result=result*base;
}
printf("%d",result);

}
