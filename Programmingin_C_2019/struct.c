#include<stdio.h>
#include<string.h>
void main()
{
  struct date
  {
    int month;
    int day;
  }dob;
   struct student
    {
    char a[20];
    int age;
    struct date dob;
    }s1;

{
   struct student s1 ;
   printf("enter the name:");
   gets(s1.a);
   printf("enter the age:");
   scanf("%d",&s1.age);
   printf("enter the month:");
   scanf("%d",&s1.dob.month);
   printf("enter the day:");
   scanf("%d",&s1.dob.day);
   printf("name%s age%d dob is%d/%d",s1.a,s1.age,s1.dob.month,s1.dob.day);
 }
}

