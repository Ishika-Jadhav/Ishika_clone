#include<stdio.h>

int main()
{
    int i = 0;
    
    for(i=11;i<=20;i++)
    {
        if((i%2) == 0)
        {
           printf("enter number is even:%d\n",i);
        }
        else
        {
              printf("enter number is odd:%d\n",i);
        }

    }
    

   return 0;
}
