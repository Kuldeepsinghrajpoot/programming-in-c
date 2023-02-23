#include<stdio.h>
void main()
{
    int i,j,n,a[3][5]={11,12,13,14,15,16,17,18,19,20};
    printf("chose the number:\n");
    for(i=0;i<2;i++)
  {
    for(j=0;j<5;j++)
    {
    printf("%d ",a[i][j]);
    }
    printf("\n");
  }
   printf("\npage no 1. \n%d %d \n%d %d",11,16,20,19);
   printf("\n\npage no 2. \n%d %d \n%d %d",12,17,13,16);
   printf("\n\npage no 3. \n%d %d \n%d %d",13,18,11,14);
   printf("\n\npage no 4. \n%d %d \n%d %d",14,19,17,15);
   printf("\n\npage no 5. \n%d %d \n%d %d",15,20,12,18);
   printf("\n\nenter the page number :");
   scanf("%d",&n);
   switch(n)
   {
   case 13:
     printf("choice no is :%d",11);
     break;
   case 25:
     printf("choice no is :%d",12);
     break;
   case 23:
     printf("choice no is :%d",13);
     break;
   case 34:
     printf("choice no is :%d",14);
     break;
   case 45:
     printf("choice no is :%d",15);
     break;
   case 12:
     printf("choice no is :%d",16);
     break;
   case 24:
     printf("choice no is :%d",17);
     break;
   case 35:
    printf("choice no is :%d",18);
    break;
   case 14:
    printf("choice no is :%d",19);
    break;
   case 15:
    printf("choice no is :%d",20);
    break;
   }
   printf("\n");
 }
