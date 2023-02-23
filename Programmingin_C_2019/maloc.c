#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,i;
    printf("enter the value");
    scanf("%d",&n);
    p=(int*)malloc(n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%u\t",(p+i));
    }
}
