#include<stdio.h>
void main()
{
  int n;
  printf("enter the number : ");
  scanf("%d",&n);
   fun (n);
}
  void fun(int p)
  {
      int i,j,n,a=1,b=0,c;
  for(i=1;i<=p;i++)
  {
  c=a+b;
  printf("%d",c);
  a=b;
  b=c;
  }

  }
