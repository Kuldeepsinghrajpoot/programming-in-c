#include<stdio.h>
#include<math.h>
void main()
{
    char a;
    float b,c,d,e;
    printf("enter the value :\n");
    scanf("%f",&b);
    scanf("%f",&c);
    printf("enter operator:  ");
    scanf("%s",&a);
    switch(a)
   {

    case '+':
        e=b+c;
        printf("%f",e);
        break;
    case '-':
        e=b-c;
        printf("%f",e);
        break;
    case '/':
        e=b/c;
        printf("%f",e);
        break;
    case '*':
       e=b*c;
       printf("%f",e);
       break;
    case '^':
    e=sqrt(a);
      printf("%d",e);
      break;
   }
}

