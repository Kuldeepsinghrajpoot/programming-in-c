#include<stdio.h>
void main()
{

    FILE *f1,*f2;
    f1= fopen("kuldeep.txt","r");
    int ch;
    int line=0,sum=0,b=0,s=0;
    while(1)
    {
        ch= fgetc(f1);
        if(ch==EOF)
        {
        break;
        }
        sum=sum+1;

        if(ch=='\n')
        {
            line=line+1;
        }
        if(ch=='\t')
        {
            b=b+1;
        }
        if(ch=='\b')
        {
          s++;
        }

    printf("%c",ch);
    }
    printf("\nTOTAL WORD:%d",sum);
    printf("\nTOTAL LINE:%d",line);
    printf("\nTAB %d",b);
    printf("\n%d",s);
    }
