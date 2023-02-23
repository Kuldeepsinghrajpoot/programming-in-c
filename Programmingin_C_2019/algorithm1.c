#include<stdio.h>
int main()
{
  int b,j,i,m,n,e,l,p,w;
  printf("Enter the base address:");
  scanf("%d",&b);
  printf("Enter the i :");
  scanf("%d",&i);
  printf("enter the value j :");
  scanf("%d",&j);
  printf("Enter the value of m :");
  scanf("%d",&m);
  printf("Enter the value of n:");
  scanf("%d",&n);
  printf("Enter the data type value :");
  scanf("%d",&w);
  e=b+(((j-1)*m)+i)*w;
  printf(" using CMO :%d\n",e);
  p=b+(((i-1)*n)+j)*2;
  printf(" using RMO :%d",p);
}
