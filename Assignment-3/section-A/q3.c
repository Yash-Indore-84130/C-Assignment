#include<stdio.h>
void digitsum(int);
void reversenum(int);
void palindrome(int);
void armstrong(int);

int digit,rem,rev;



int main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
digitsum(num);
reversenum(num);
palindrome(num);
armstrong(num);
return 0;
}


void digitsum(int num)
{
int sum;
while(num!=0)
{

 digit = num%10;
 sum=sum+digit;
 num = num/10;
}
printf("The sum of is: %d\n",sum);

}





void reversenum(int num)
{
int rev;
while(num!=0)
{
digit = num%10;
rev = rev*10+digit;
num = num/10;
}
printf("The reverse number is:%d\n",rev);
}




void palindrome(int num)
{
int temp=num;
while(num!=0)
{
digit = num%10;
rev = rev*10+digit;
num=num/10;
}
if(temp==rev)
{
printf("The number is palindrome\n");
}
else
{
printf("The number is not palindrome\n");
}
}




void armstrong(int num)
{
int temp=num;
int sum;
while(num>0)
{
 digit=num%10;
 sum=sum+(digit*digit*digit);
 num=num/10;
}
if(temp==sum)
{
printf("The number is armstrong number");
}
else
{
printf("The number is not armstrong number");
}

}















