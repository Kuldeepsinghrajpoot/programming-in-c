#include<stdio.h>
void main()
{
    FILE *f;
    f=fopen("ksr.txt","w");
    int i,j;
    char x='A';
    char y='a';
    printf("ASCII CODE OF CPITAL A-Z:\n");
    for(i=0;i<=25;i++)
    {
      for(j=x;j<=i;j++)

      x++;
      printf("%c=%d,\t",x,x);
      x++;

    }
    printf("\n\nASCII CODE OF SMALL a-z:\n");
     for(i=0;i<=25;i++)
    {
      for(j=y;j<=i;j++)
      y++;
      printf("%c=%d,\t",y,y);
      y++;
    }
}
