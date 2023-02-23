#include <stdio.h>
void main()
{
    FILE *f;
    f=fopen("abc.txt","r");
    int l,w,area,a;
    //fscanf(f,"%d",&l);
   // fscanf(f,"%d",&w);
    while(1)
    {
        a=feof(f);
        if(a==0)
        {
              fscanf(f,"%d",&l);
              fscanf(f,"%d",&w);
              area=l*w;
         }
    fprintf (f,"area is :%d",area);
    }
}
