#include<stdio.h>
void main()
{
    FILE *f,*y;
    f=fopen("abc.txt","r");
    y=fopen("raj.txt","a");
    char ch;
    while(1)
    {
        ch=fgetc(f);
        if(ch==EOF)
        {
            break;
        }
       else if(ch>='a'&&ch<='z')
            {
               ch=ch-32;
            }

       printf("%c",ch);
    }
       fprintf(y,"%c",ch);

}

