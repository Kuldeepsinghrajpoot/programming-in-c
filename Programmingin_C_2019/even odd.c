#include<stdio.h>
void main()
{
    FILE *f;
    f=fopen("ku.txt","w");
      int i;
      for(i=0;i<=100;i++)
      {
      if(i<50)
    {
       if(i%2==1)
      {
          if(i==1)
          {
              fprintf(f,"odd number :\n");
          }
     fprintf(f,"%d\t" ,i);
     }
   }

        else if (i%2==0)
    {
        if(i==50)
        {
            fprintf(f,"\neven number :\n");

        }
       fprintf(f,"%d\t",i);
    }
   }
}
