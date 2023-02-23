#include<stdio.h>
void main()
{
    FILE *f1,*f2;
    f1=fopen("yash.txt","r");
    f2=fopen("ans.txt","w");
    int ch,l,w,area;
    fscanf(f1,"%d",&f2);
    while(1)
    {
        ch=fgetc(f1);
        if(ch=EOF)
        {
            break;
        }
        fputc(ch,f2);
        area=l*w;
    }
    printf ("area is :%d",area);
}
