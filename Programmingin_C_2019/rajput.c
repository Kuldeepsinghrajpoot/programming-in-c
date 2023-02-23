
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
    int i;
    //printf("enter the roll number :");
    //scanf("%s",&k1.rn);
    //printf("enter the name :");
    //fflush(stdin);
   // scanf("%s",&k1.sn);
    while (i>5)
    {
    printf("enter the hindi marks :");
    scanf("%d",&k1.s1);
    if(k1.s1>=33)
    {
        continue;
    }
     else if (k1.s1>=33)
        printf("fail");
    }

}
