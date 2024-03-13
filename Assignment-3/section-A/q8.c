#include <stdio.h>

int euclidean_gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    
    int gcd = euclidean_gcd(a, b);
    printf("The GCD of %d and %d is %d\n", a, b, gcd);

    return 0;
}













/*#include<stdio.h>
int main()
{
int a,b;
printf("Enter two number:");
scanf("%d %d",&a,&b);
while(b!=0)
{
int temp=b;
b=a%b;
a=b;

}
printf("%d\n",a);

}*/
