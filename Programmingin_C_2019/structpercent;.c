
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
    for(i=0;i<2;i++)
    {
    printf("enter the roll number :");
    scanf("%s",&k1.rn);
    printf("enter the name :");
    scanf("%s",&k1.sn);
    printf("enter the hindi marks :");
    scanf("%d",&k1.s1);
    printf("enter the english marks :");
    scanf("%d",&k1.s2);
    printf("enter the physics marks :");
    scanf("%d",&k1.s3);
    printf("enter the chemistry marks :");
    scanf("%d",&k1.s4);
    printf("enter the math marks :");
    scanf("%d",&k1.s5);
    k1.total = k1.s1+k1.s2+k1.s3+k1.s4+k1.s5;
    k1.p=k1.total/5;
    printf("percent:%f",k1.p);
    printf("\nROLL NUMBER:%s\t  NAME:%s\tHINDI:%d\tENGLISH:%d\tPHYSICS:%d\tCHEMISTRY:%d\tMATH:%d\tpercent:%f\n",k1.rn,k1.sn,k1.s1,k1.s2,k1.s3,k1.s4,k1.s5,k1.p);
    if(k1.p>=60)
      {
            printf("\nFIRST DIVISION");
            fprintf(f,"\tDIVISION :FIRST\n");
      }
      else if(k1.p>=45)
      {
            printf("SECOND DIVISION");
            fprintf(f,"\tDIVISION :SECOND\n");
      }
      else if(k1.p>=33)
      {
            printf("\nTHIRD DIVISION");
            fprintf(f,"\tDIVISION :THIRD\n");
      }
      else
      {
           printf("fail");
           fprintf(f,"\tfail");
      }
    }
}
