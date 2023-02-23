#include<stdio.h>
  int a[10];
  int fun1(int l)
{
    int i;
    printf("enter the value\n");
    for(i=0;i<=l;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("all value is : ");
    for(i=0;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return i;
    }
 int fun2(int s)
{
    int i,q;
    printf("\n\nenter the value\n\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("all value is : ");

     for(i=s;i>1;i--)
    {
        printf("%d ",a[i]);
        break;
        q=a[i];
    }
    return q;

}
void main()
{
    int y,m,p,s;
    printf("Enter the value");
    scanf("%d",&y);
    m=fun1(y);
    printf("%d",m);
    printf("\nEnter the value :");
    scanf("%d",&s);
    p=fun2(s);
    printf("%d",p);
}

