#include <stdio.h>

int main()
{
int a,b;
printf("Enter two number:");
scanf("%d %d",&a,&b);
int temp;
 while (b != 0) {
    temp = b;
    b = a % b;
    a = temp;
    }
printf("%d\n",a);

}
