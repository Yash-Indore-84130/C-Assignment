#include<stdio.h>
int main()
{
int year;
printf("Enter a Year");
scanf("%d",&year);
/*
if(year%100==0)
{
  if(year%400==0)
  {
  printf("The year is leap year ");
  printf("and 366 days");
  }
  else
  {
  printf("The year is not leap year");
  printf("and 365 days");
  }
 }
 else
 {
      if(year%4==0)
      {
      printf("The Year is leap year ");
      printf("and 366 days");
      }
      else
      {
      printf("year is not leap year");
      printf("and 365 days");
      }
   }
   
   //B] Using logical operator
   
   
   if((year % 4 == 0) && (year % 100 != 0))
   {
    printf("The leap year");
   }
   else if(year % 400 == 0)
   {
   printf("Leap year");
   }
   else
   {
   printf("Not leap year");
   }
    
  */
  
  // C] Using ternary condition  
  
  if((year % 4 == 0) && (year % 100 != 0) ? printf("The number is leap year\n") : (year % 400 == 0) ?printf("Leap year\n") : printf("Not Leap Year\n"));
  
    
    
}
