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
    int i;
    for (i=0;i<=19;i++)
    {
        printf ("enter the name :");
        scanf ("%d",p);
        printf("address is :%u",p);
        p++;
    }
    for (i=0;i<=19;i++)
    {
        p--;
        printf("%\n\nnumber is :%d",*p);
        printf ("\naddress is :%u",p);
    }
}
