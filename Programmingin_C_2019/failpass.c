#include<stdio.h>
void main()
{
    int  s1,s2,s3,s4,s5,sum=0,p,total=0;
    printf("enter the Hindi no:");
    scanf("%d",&s1);
    printf("enter the English no:");
    scanf("%d",&s2);
    printf("enter the physics no");
    scanf("%d",&s3);
    printf("enter the math no:");
    scanf("%d",&s4);
    printf("enter the chemistry no:");
    scanf("%d",&s5);
    if((s1>30)&&(s2>30)&&(s2>30)&&(s3>30)&&(s3>30)&&(s4>30)&&(s4>30)&&(s5>30))
    {
       printf("pass");
       sum=s1+s2+s3+s4+s5;
       p=sum/5;
       printf("%d",p);
        if(p>=60)
      {
            printf("\nFIRST :DIVISION");
           // fprintf(f,"\tDIVISION :FIRST\n");
      }
      else if(p>=45)
      {
            printf("SECOND: DIVISION");
           // fprintf(f,"\tDIVISION :SECOND\n");
      }
      else if(p>=33)
      {
            printf("\nTHIRD: DIVISION");
            //fprintf(f,"\tDIVISION :THIRD\n");
      }
     else
      {
       printf("fail");
       total=s1+s2+s3+s4+s5;
      }
    }
}
