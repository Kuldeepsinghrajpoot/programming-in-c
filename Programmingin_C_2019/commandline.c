#include<stdio.h>

  int main(int argc ,char*argv[])
{
  int x;
  printf("total number of argument are :%d\n",argc);
  for(x=0;x<argc;x++)
  {
    printf("%s",argv[x]);
  }
}
