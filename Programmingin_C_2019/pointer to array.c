#include<stdio.h>
void main()
{
  int i,n[5],*p,sum=0;
   p=n;
  for(i=0;i<5;i++)
  {
  printf("enter the value:");
  scanf("%d",p+i);
  }
  for(i=0;i<5;i++)
  {
      sum=sum+*(p+i);
  }
   printf("%d",sum);

}
