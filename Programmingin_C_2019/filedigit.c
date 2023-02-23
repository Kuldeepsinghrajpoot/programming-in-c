#include<stdio.h>
void main()
{
    int n,sum=0,num;
    printf("enter the number : ");
    scanf("%d",&n);
    while(n!=0)
    {
           num=n%10;
           sum =num;
           n= n/10;
           //n= num;

          printf("%d",sum);
    }
 }
