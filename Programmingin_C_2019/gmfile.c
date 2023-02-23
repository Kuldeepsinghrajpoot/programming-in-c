
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    char sn[30],rn[20];
    int s1,s2,s3,s4,s5;
    float p;
    int total;
}k1;
void main()
{
    FILE *f;
    f=fopen("ayk.txt","a");
    struct student k1;
    int i,pass=0;
    //printf("enter the roll number :");
    //scanf("%s",&k1.rn);
   // printf("enter the name :");
   // fflush(stdin);
   // scanf("%s",k1.sn);
   // printf("enter the hindi marks :");
   // scanf("%d",&k1.s1);
    if(pass>33)
    {
        pass=pass+k1.s1;
    }
    printf("enter the english marks :");
    scanf("%d",&k1.s2);
    printf("enter the physics marks :");
    scanf("%d",&k1.s3);
    printf("enter the chemistry marks :");
    scanf("%d",&k1.s4);
    printf("enter the math marks :");
    scanf("%d",&k1.s5);

}

