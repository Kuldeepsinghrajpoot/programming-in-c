#include<stdio.h>
void main()
{
  FILE *f1;
  f1=fopen("mi.txt","r");
  char ch;
  while(1)
  {
  ch=fgetc(f1);
  if(ch==EOF)
  {
     break;
  }
  printf("%c",ch);


}
}
