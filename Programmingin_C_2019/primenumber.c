#include<stdio.h>
void main()
{
  int i,j,n=100,k=1;
  printf("%d\t",k);

  for(i=1;i<=100;i++)
  {
    for(j=2;j<=i;j++)
    if(i%j==0)
    break;

  if (i==j)
  {
  printf("%d\t",i);
  }
  }
}
