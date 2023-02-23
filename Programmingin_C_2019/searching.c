#include<stdio.h>
void main()
{
    int a[10],i,key=8,flag=0,count=1,n;
    printf("Enter the  array \n");
    scanf("%d",&n);
    printf("enter the array value \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;

            break;
        }
        count=count+1;
    }
    printf("\n");
    if(flag==1)
    {
        printf("data is :%d",a[i]);
    }
    else
    {
        printf("no data found\n");
    }


}
