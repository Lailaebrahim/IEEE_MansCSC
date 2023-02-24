#include <stdio.h>
#include <stdlib.h>

int main()
{   int month ;
    printf(" enter months number \n");
    scanf(" %d",&month);
  /* why not working
   if ((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
    {
       printf(" the number of days are 31 days\n");
    }
    else if (month==4 ||  month==6 ||  month==9 ||  month==11)
    {
         printf(" the number of days are 30 days");

    }
    else if (month==2)
    {
        printf(" the number of days are 28\29 days\n");
    }
    else{
                 printf(" INVALID number \n ");
    } */
    if(month == 1)
    {
        printf(" the number of days are 31 days");
    }
    else if(month == 2)
    {
        printf(" the number of days are 28 or 29 days");
    }
    else if(month == 3)
    {
        printf(" the number of days are 31 days");
    }
    else if(month == 4)
    {
        printf(" the number of days are 30 days");
    }
    else if(month == 5)
    {
        printf(" the number of days are 31 days");
    }
    else if(month == 6)
    {
        printf(" the number of days are 30 days");
    }
    else if(month == 7)
    {
        printf(" the number of days are 31 days");
    }
    else if(month == 8)
    {
        printf(" the number of days are 31 days");
    }
    else if(month == 9)
    {
        printf(" the number of days are 30 days");
    }
    else if(month == 10)
    {
        printf(" the number of days are 31 days");
    }
    else if(month == 11)
    {
        printf(" the number of days are 30 days");
    }
    else if(month == 12)
    {
        printf(" the number of days are 31 days");
    }
     else{
                 printf(" INVALID number \n ");
    }
    return 0;
}
