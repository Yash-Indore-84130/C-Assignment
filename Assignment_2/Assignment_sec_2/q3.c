#include<stdio.h>
int main()
{
int dep_no,empid;
char desg_code;
printf("Enter the empid : ");
scanf("%d",&empid);
printf("Enter the dep_no: ");
scanf("%d",&dep_no);

printf("Enter desg code: ");
scanf("%*c%c",&desg_code);

switch(dep_no)
{
case 10:printf("Employee with employee id %d is working in Marketing", empid);
break;
case 20:printf("Employee with employee id %d is working in Management",empid);
break;
case 30:printf("Employee with employee id %d  is working in Sales" ,empid);
break;
case 40:printf("Employee with employee id %d  is working in Designing",empid);
break;
}
switch(desg_code)
{
case 'M':printf(" as a Manager");
break;
case 'S':printf(" as a Supervisor");
break;
case 's':printf(" as a Security Officer");
break;
case 'C':printf(" as a Clerk");
break;
}

}
