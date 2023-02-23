#include <stdio.h>
#include<string.h>
void main()
{
   char a[20];
   int i,l;
   printf("enter the name :");
   gets(a);
   for(i=7;i>=0;i--)
   {
      printf("%c",a[i]);
   }
      l=strlen(a);
      printf("%d",l);

}
