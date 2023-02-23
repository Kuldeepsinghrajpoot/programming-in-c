#include<stdio.h>
void main()
{
    FILE *f1,*f2;
    f1= fopen("xyz.txt","r");
    f2=fopen("abcd.txt","a");
    int p,r,t,a;
    float ip;
    while(1)
    {
    a=feof(f1);
    if(a==0)
    {
        fscanf(f1,"%d",&p);
        fscanf(f1,"%d",&r);
        fscanf(f1,"%d",&t);
        ip=p*r*t/100;
        fprintf(f2,"\n%f",ip);
    }
    else
    {
        break;
    }

}
}
