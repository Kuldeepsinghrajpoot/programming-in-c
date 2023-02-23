#include<stdio.h>
#include<ctype.h>
void main()
{
  char a,b;
  printf("enter the name :");
  a=getchar();
  if( islower(a) )
    putchar(toupper(a));
  else
  {
      putchar(tolower(a));
  }
}
