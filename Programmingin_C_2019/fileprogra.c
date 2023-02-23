#include<stdio.h>
void main()
{
    FILE *f;
    f= fopen("abc.txt","w");
    float a,b,c;
    fprintf(f,"enter the value\n");
    fscanf(f,"%f",&a);
    fprintf(f,"enter the value");
    fscanf(f,"%f",&b);
    f,c=(f,(a+b)/2);
    printf("%f",c);
    fprintf(f,"%f",c);
    fclose(f);

}
