#include <stdio.h>
void main()
{
 int c[4][5],i,j,m=0,n=0,d[4][5];
    int a[4][3]={1,2,3,4,5,6,4,7,8,9,10,11,19,22};
    int b[4][3]={1,7,8,9,4,5,6,2,8,1,3,1,10,88,89,11};
    for(i=0;i<2;i++)
    {
     for(j=0;j<3;j++)
    {
    printf("%d ",a[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<2;j++)
    {
    printf("%d ",b[i][j]);
    }
    printf("\n");
    }
    printf("\n");

    for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
    {
    c[i][j]=a[i][j]*b[j][0];
    printf("%d ",c[i][j]);
    }
    printf("\n");
    }

    for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
    {
    m=m+c[0][j];
    }
    printf("%d",m);
    printf("\n");
}
}




