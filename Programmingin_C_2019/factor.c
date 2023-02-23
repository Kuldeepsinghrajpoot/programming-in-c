#include<stdio.h>
void main()
{
  int i,n,p,sum=0;
  printf("enter the number: ");
  scanf("%d",&n);
  while(n>0)
  {
     p=n%10;
    sum=sum+p;
    n=n/10;
    i++;
  }
    printf("%d",sum);

}
