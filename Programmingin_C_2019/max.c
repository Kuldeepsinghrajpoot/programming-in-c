#include<stdio.h>
void main()
{
  int i,j,a[10],n,max=0;
  printf("enter the number: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("enter the value :");
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
      if(a[j]>a[i])
        {
     max=a[i];
     a[i]=a[j];
     a[j]=max;
        }
      }
  }
  for(i=0;i<n;i++)
   printf("%d",a[i]);


}
