#include<stdio.h>
void main()
{
  int i=0,n,sum=0,j;
  printf("enter the value of decimal :");
  scanf("%d",&n);
  while(n!=0)
  {
    i=n%2;
    sum=i;
    n=n/2;
  printf("%d",sum);
  }
  printf("\n");
  for(j=n-1;j>=0;j--)
    printf("%d",j);

}
