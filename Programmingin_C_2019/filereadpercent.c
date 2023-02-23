#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *f;
    f=fopen("abc.txt","r");
    char name[30],gen;
    int s1,s2,s3,s4,s5,total=0;
    float p;
    fscanf(f,"%s",&name);
    printf("name :\t%s",name);
    fscanf(f,"%s",&gen);
    printf("\tgender :%c",gen);
    fscanf(f,"%d",&s1);
    fscanf(f,"%d",&s2);
    fscanf(f,"%d",&s3);
    fscanf(f,"%d",&s4);
    fscanf(f,"%d",&s5);
    total=s1+s2+s3+s4+s5;
    printf("\ttotal :%d",total);
    p=total/5;
    printf("\tpercent :%f",p);
}
