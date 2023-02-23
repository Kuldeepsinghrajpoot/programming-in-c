#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 struct student
{
   char name[30];
   int age;
   char gender;
   float sgpa;
 }s;
 void main()
 {

    FILE *f;
    f=fopen("singh.txt","a");
     struct student s[30] ;
    int i;
    for(i=0;i<=1;i++)
   {
    printf("ENTER THE NAME :");
    scanf("%s",&s[i].name);
    printf("ENTER THE AGE :");
    scanf("%d",&s[i].age);
    printf("ENTER THE GENDER :");
    scanf("%s",&s[i].gender);
    printf("ENTER THE SGPA :");
    scanf("%f",&s[i].sgpa);
    }
    fprintf(f," name\t\tage\tgender\tsgpa");
    printf(" name\t\tage\tgender\tsgpa");
    for(i=0;i<=1;i++)
  {
    fprintf(f,"\n %s\t %d\t %c\t %f",s[i].name,s[i].age,s[i].gender,s[i].sgpa);
    printf("\n %s\t %d\t %c\t %f",s[i].name,s[i].age,s[i].gender,s[i].sgpa);
   }

 }
