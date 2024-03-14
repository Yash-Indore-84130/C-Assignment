#include<stdio.h>
int main()
{
int i,j,a,b;
printf("Enter a two number:");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
for(j=1;j<=10;j++)
{
printf("%d\t",i*j);

}
printf("\n");
}


}
