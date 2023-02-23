#include<stdio.h>
#include<stdlib.h>
 struct student
 {
    char name [20];
    int age;
    char gender;
    float sgpa;
}s;
void main()
{
    FILE *f2;
    f2=fopen("ram.txt","w");
    struct student *p;
    p=(struct student*)calloc(5,sizeof (struct student));
    printf ("what is your name :");
    fflush(stdin);
    scanf("%s",&s.name);
    printf ("what is your age :");
    scanf ("%d",&s.age);
    printf ("what is your gender :");
    fflush(stdin);
    scanf ("%c",&s.gender);
    printf ("what is your sgpa :");
    scanf ("%f",&s.sgpa);
    fprintf(f2,"%s\t%d\t%c\t%f",s.name,s.age,s.gender,s.sgpa);
}
