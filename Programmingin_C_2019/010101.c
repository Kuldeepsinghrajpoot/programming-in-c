#include<stdio.h>
void main()
{
    int i,j,k,l,n;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("0");
        for(j=0;j<i;j++)
        {
        printf(" ");
       // break;
        }
        printf("1");
        for(k=i;k>=i;k--)
        {
            printf("0");
        }
        printf("1");
    printf("\n");
}
}
