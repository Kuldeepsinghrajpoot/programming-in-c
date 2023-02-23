#include <stdio.h>
void main()
{
    int c[4][5],i,j,d[4][5];
    int a[2][3]={1,2,3,4,5,6};
    int b[4][3]={6,5,4,3,2,1};

     for(j=0;j<2;j++)
    {
        for(i=0;i<3;i++)
    {
      printf("%d ",a[j][i]);
    }
    printf("\n");
    }
    printf("\n");
     for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
    {
      printf("%d ",a[0][j]);
    }
    printf("\n");
    }


}

