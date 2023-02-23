#include<stdio.h>
void main()
{

    FILE *f1,*f2;
    f1= fopen("kuldeep.txt","r");
    char ch;
    int line=0,sum=0;
    while(1)
    {
        ch= fgetc(f1);
        if(ch==EOF)
        {
        break;
        }

    sum=sum+1;
    printf("%c",ch);
    }
    printf("%d",sum);
    while(1)
    {
        ch==fgetc(f1);
        if(ch=="\n")
        {
            break;
        }
        line=line+1;
    }
      printf("%d",line);
}
