#include<stdio.h>
void main()
{
    FILE *f;
    f= fopen("kl.txt","w");
    int rem,base=1,num,d=0;
    printf("enter the binary:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        d=d+rem*base;
        num=num/10;
        base=base*2;
    }
    fprintf(f,"decimal number:%d",d);
}
