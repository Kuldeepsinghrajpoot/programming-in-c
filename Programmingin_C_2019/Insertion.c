#include<stdio.h>
void main()
{
   int a[10],i,j,temp,ttp,n;
   printf("enter the number of array  : ");
   scanf("%d",&n);
   printf("enter the element of array : ");
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("value is :");
   for(i=1;i<=n;i++)
   {
       printf("%d",a[i]);
   }
   a[0]=-0;
    for(i=1;i<=n;i++)
    {
       temp=a[i];
       ttp=i-1;
       while(temp<a[ttp])
       {
           a[ttp+1]=a[ttp];
           ttp=ttp-1;
       }
       a[ttp+1]=temp;
    }
    printf("\nsorting \n");

    for(i=1;i<=n;i++)
        {
       printf("%d",a[i]);
        }
}

