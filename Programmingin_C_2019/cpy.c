#include<stdio.h>
#include<string.h>
void main()
{
  char a[10],m[10];
  printf("enter the name :");
  gets(a);
  printf("enter the lastname :");
  gets(m);
  strcpy(a,m);
  printf("%c",a);
}
