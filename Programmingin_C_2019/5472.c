#include<stdio.h>
#include<string.h>
#include<stdlib.h>
  struct student
  {
     char name [20];
     int age;
     char gender;
     float sgpa;
  } ;
   void main()
   {

    FILE *f;
    struct student s;
    f=fopen("ayush.txt","w");
    fflush(stdin);
    printf("enter the name:");
    fflush(stdin);
    scanf("%s",&s.name);
    printf("enter the age:");
    scanf("%d",&s.age);
    fprintf(f,"name=%s\nage=%d",s.name,s.age);
   }



