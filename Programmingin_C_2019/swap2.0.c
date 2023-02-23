#include<stdio.h>
void swap(int a,int b)
{
    int c;
     c=a+b;
    a=b;
    b=c;
}
     void main()
  {
      int i,j;
      printf("enter the value : ");
      scanf("%d",&i);
      printf("enter the value : ");
      scanf("%d",&j);
      printf("before swap i :%d j:%d",i,j);
      swap(i,j);
      printf("\nafter swap i:%d j:%d",i,j);
 }
