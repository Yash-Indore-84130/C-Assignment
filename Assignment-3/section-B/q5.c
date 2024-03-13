#include<stdio.h>
int main()
{
int n,count=0;
printf("Enter a number:");
scanf("%d",&n);
for(int i=2;i<n/2;i++)
{
  if(n%i==0)
   {
   count++;
   }
}
if(count!=0)
{
printf("The number is not prime");

}
else
{
printf("The number is prime");
}



}
