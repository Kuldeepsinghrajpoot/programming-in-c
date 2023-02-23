#include<stdio.h>
void main()
{
  int n,i;
  printf("enter the table number :");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {

    printf("%d*%d=%d\t",n,i,n*i);
    printf("\n");
  }
}
