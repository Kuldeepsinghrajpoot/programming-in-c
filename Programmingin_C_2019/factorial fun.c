#include<stdio.h>
void main()
{
      void fun(int a);
      int n;
      printf("enter the number :");
      scanf("%d",&n);
      fun(n);
}
    void fun( int a)
 {
     int n,i,f=1,p=0;
     for(i=1;i<=a;i++)
  {
     f=f*i;
  }
    printf("%d",f);

 }
