#include<stdio.h>
void main()
{
  int m,n,*p,**q,***l;
     p=&m;
     q=&p;
     l=&q;
  printf("enter the number:");
  scanf("%d",&m);
  printf("%d\n",*p);
  printf("%d\n",p);
  printf("%u\n",q);
  printf("%d\n",l);
  *p=50;
  printf("%d\n",***l);







}
