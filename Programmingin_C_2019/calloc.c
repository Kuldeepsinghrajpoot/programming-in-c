#include<stdio.h>
#include<stdlib.h>
void main()
{
  int m,n,*p,i;
  printf("enter the size of memory: ");
  scanf("%d",&m);
  printf("enter the size of block :");
  scanf("%d",&n);
  p=(int*)calloc(m,n);
  for(i=0;i<n;i++)
  {
    printf("enter the number :");
    scanf("%d",p);
    p++;
  }
  for(i=0;i<n;i++)
  {
  p--;
  printf("%d",*p);
  }
}
