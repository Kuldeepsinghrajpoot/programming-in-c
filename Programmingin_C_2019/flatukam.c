#include<stdio.h>
void main()
{
  FILE *f;
    f=fopen("abc.txt","r");
    char ch;
    while (1>0)
    {
    ch=fgetc(f);
    if(ch==EOF)
   {
    break;
   }
   //printf("%c",ch);

   else if (ch>='a'&&ch<='z')
   {
       ch=ch;
   }
    printf("%c",ch);

    }
}
