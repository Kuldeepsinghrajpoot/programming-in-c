#include<stdio.h>
int rec(int p)
{
    int f;
    {
    if(p==1)
    return(1);
    else
    f=p*rec(p-1);
    return(f);
    }
}
 void main()
{
  int n,num;
  printf("enter the number :");
  scanf("%d",&num);
  n=rec(num);
  printf("%d",n);
}
