#include<stdio.h>
void main()
{
    int i,j,a[10],temp,n;
    printf("Enter the number of array\n");
 scanf("%d",&n);
 printf("Enter elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {

        for(j=0;j<i;j++)
        {
        if(a[i]<a[j])

        {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
        }
        }

    }
    printf("sorting \n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
