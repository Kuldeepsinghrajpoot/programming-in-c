#include<stdio.h>
#include<string.h>
void main()
{
    int rn,s1,s2,s3,s4,s5,total;
    char sn;
    float p;
    printf("enter the roll number :");
    scanf("%d",&rn);
    printf("enter the name :");
    scanf("%s",&sn);
    printf("enter the hindi marks :");
    scanf("%d",&s1);
    printf("enter the english marks :");
    scanf("%d",&s2);
    printf("enter the physics marks :");
    scanf("%d",&s3);
    printf("enter the chemistry marks :");
    scanf("%d",&s4);
    printf("enter the math marks :");
    scanf("%d",&s5);
    total = s1+s2+s3+s4+s5;
    p=total/5;
    printf("precent is : %f",p);
    if(p>60)
      {
            printf("\nFIRST DIVISION");
      }
      else if(p>45)
      {
            printf("\nSECOND DIVISION");
      }
      else if(p>33)
      {
            printf("\nTHIRD DIVISION");
      }
      else
      {
           printf("\nfail");
      }
}

