#include<stdio.h>
void main()
{
    FILE *f;
    f=fopen("raj.txt","r");
    char ch,d;
    while(1)
      {
      ch=fgetc(f);
      if(ch==EOF)
      {
         break;
      }
       else if(ch>='A')
        {
        if (ch<='Z')
            {
               ch=ch+32;
            }
        }
      printf("%c",ch);
      switch(ch)
      {
        case 'a':
        case 'e':
        case  'o':
        case  'i':
        printf("\t%c\t",ch);
        break;
        default:
        printf("%c",d);
      }

  }
}

