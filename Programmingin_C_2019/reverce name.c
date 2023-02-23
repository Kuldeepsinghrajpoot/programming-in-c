#include<stdio.h>
#include<string.h>
void main()
{
  char a[20];
  int i,j,b,l,k,m;
  printf("enter the name : ");
  gets(a);
  l=strlen(a);

  for(i=0;i<l;i++)
  {
      for(j=0;j<i;j++)
      {
      for(k=i;k>=0;k--)
        printf("%c",a[k]);
        printf("\n");
      }
  }

}
