#include<stdio.h>
void main()
{
   int m[5],i,*p,q;
   printf("Enter the value:");
   for(i=0;i<4;i++)
   {
       scanf("%d",&m[i]);
   }
 p=&m;
 printf("\n%d\n",p);
 q=p(m[3]);
 printf("%d\n",q);
   for(i=0;i<4;i++)
   {
       printf("%d",m[i]);
   }
   for(i=0;i<4;i++)
   {
   p=&m[i];
   printf("\n%d,%d",*p,p);

   }


}
