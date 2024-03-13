/*#include<stdio.h>
int main()
{
int i,j,n;

printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
  if(i*j==n)
  {
  printf("%d X %d = %d\n",i,j,(i*j));

}

}

}
} */


#include<stdio.h>
int main()
{
int i=1,n;
printf("Enter a number:");
scanf("%d",&n);

while(i<=n)
{  
        int j=1;

	while(j<=n)
	
		{
		if(i*j==n)
		{
		  printf("%d X %d = %d\n",i,j,(i*j));
		}
		j++;
}
i++;
}


}
