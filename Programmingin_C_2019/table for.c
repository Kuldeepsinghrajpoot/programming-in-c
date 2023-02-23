#include<stdio.h>
void fun(int n)
{
    int i,b=1;
    for(i=1;i<=10;i++)
    {

    b=i*n;

    printf("%d*%d=%d\t",n,i,n*i);
    }
}
   void main()
   {
       int a,b;
       printf("enter the value of table no.");
       scanf("%d",&a);
      // printf("enter the number");
       //scanf("%d",&b);
       fun(a);
       //fun(b);
   }
