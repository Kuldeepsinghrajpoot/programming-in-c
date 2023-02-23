#include<stdio.h>
void main()
{
  int a[7],i,sum=0,*p;
  p=a;
  for(i=1;i<=6;i++)
  {
      printf("enter the number :");
      scanf("%d",p+i);
  }
  for(i=1;i<=6;i++)
  {
    sum=sum+*(p+i);

  }
    printf(" sum :%d",sum);
    //printf("address : %d\n",p);
 }
