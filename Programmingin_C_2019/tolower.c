#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
  char *a="KULDEEP";
  int l,i;
  //printf("enter the name : ");
  //gets(a);
  l=strlen(a);
  for(i=0;i<l;i++)

    a[i]=tolower(a[i]);
    printf("%s\n  ",a[i]);

}
