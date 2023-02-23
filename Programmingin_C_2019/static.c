#include<stdio.h>
 int demo();
 void main()
 {
     demo();
     demo();
     demo();
 }
 int demo()
 {
     static int num;
     num=num+1;
     printf("num=%d\n",num);
 }
