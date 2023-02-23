#include<stdio.h>
void main()
{
  int n,j[10],i,sum=1;
  printf("enter the number :");
  scanf("%d",&n);
  while(n>0)
  {
    i=n%10;
    sum=i;
    n=n/10;
  printf("%d",sum);
  }
  for(j=0;j<10;j++)
  {
      printf("%d",sum[j]);
  }

}
