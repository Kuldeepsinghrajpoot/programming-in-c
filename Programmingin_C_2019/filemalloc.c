#include<stdlib.h>
#include<stdio.h>
void main()
{
    FILE *f;
    f=fopen("yash.txt","w");
    int i,*p,n;
    p= (struct student*)malloc(sizeof struct student);
    for(i=0;i<n;i++)
    {
        printf("\nenter the number :");
        scanf("%d",p);
        printf("address is :%u",p);
        p++;
    }
    for(i=0;i<n;i++)
    {
        p--;
        printf("%\n\nnumber is :%d",*p);
        printf ("\naddress is :%u",p);

    }
}
