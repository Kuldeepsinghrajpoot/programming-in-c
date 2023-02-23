#include<stdio.h>
void main()
{
  int i=1,f=1,n;
  printf("enter the number" );
  scanf("%d",&n);
  lable :
  {
    f=f*i;
    i++;
  }
    while (i<=n)
     goto lable;
    printf("%d",f);
}
