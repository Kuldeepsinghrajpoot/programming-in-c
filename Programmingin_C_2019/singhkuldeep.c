#include<stdio.h>
void main()
{
    int c[3][4],i,j,k,m;
    int a[4][3]={1,2,3,4,5,6,4,7,8,9,10,11};
    int b[5][4]={1,7,8,9,4,5,6,2,8,1,3,1,10};
    for(i=0;i<4;i++)
  {
    for(j=0;j<3;j++)
    {
    printf("%d ",a[i][j]);
    }
    printf("\n");
  }
    printf("\n");
    for(k=0;k<3;k++)
    {
    for(m=0;m<4;m++)
      {
    printf("%d ",b[k][m]);
      }
    printf("\n");
    }
   for(i=0;i<3;i++)
       {
    for(k=0;k<3;k++)
      {
    c[i][k]=a[i][j]*b[k][m];
       }
       }
      printf("\n");
      for(i=0;i<4;i++)
       {
    for(k=0;k<3;k++)
    {
    printf("%d  ",c[i][k]);
    }
    printf("\n");
     }
   }
