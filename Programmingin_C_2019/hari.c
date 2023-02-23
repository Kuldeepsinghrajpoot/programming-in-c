#include<stdio.h>
void main()
{
  FILE *f1,*f2;
  int ch;
  f1=fopen("ram.txt","r");
  f2=fopen("kpl.txt","a");
   while(1)
   {
  ch=fgetc(f1);
   if(ch==EOF)
  {

      break;
  }
  fputc(ch,f2);
}
}
