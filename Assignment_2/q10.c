#include<stdio.h>
int main()
{
char c;
printf("Enter a char:");
scanf("%c",&c);
if((c>=65 && c<=90) || (c>=97 && c<=122))
{
  if((c>=65) && (c<=90))
  {
  
  printf("%c is Uppercase",c);
  }
  else
  {
  printf("%c is lowercase",c);
  
 }
}
else if(c>=48 && c<=57)
{
printf("%c is digit",c);
}
else if(c == ' ')
{
printf("space");
}
else if(c == '\t')
{
printf("TAB");
}
else if( c == '\r')
{
printf("carriage return");
}
else if(c=='\n')
{
printf("Newlline");
}
else
{
printf("Not listed");
}

}

