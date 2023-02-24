/**
 ******************************************************************************
 * @file           : onlineMarketSimulator.c
 * @author         : Laila Ebrahim
 * @brief          : a program for a market which takes orders from the internet.
                    The program requires the following:
                    • The item name, price, and if overnight shipping is needed.
                    • Regular shipping for items under 10$ is 2$, and for items 10$ or more is 3$. For overnight delivery add 5$.
                    • 2 items are required as a minimum for one order.
                    • If the customer ordered more than 5 items, they will get a 20% discount on the total fee.
                    • There must be a choice for the customer to either continue shopping or finish the order.
                    • A detailed receipt or invoice should be displayed for the customer.

 ******************************************************************************
 */
/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>

/* ********************** Includes Section End   ********************** */

/* ********************** Main call Section Start ******* */
int main()
{
    int choice1, choice2=1, count=0, i, overnightShipping, shipping ;
    float discount, totalprice, totalfee;
    char itemName[10];
    int itemPrice[10];
    printf("Hello welcome to our market!\n");
    printf(" to make an order enter 1 \n to exit enter 0 \n"); /*the choice for the user to start making the order or exit the program */
    scanf(" %d",&choice1);
    switch(choice1)
    {
    case 1:
        printf(" NOTE: 2 items for minimum  and 10 items for max are required to make an order \n");
        for(i=0 ; i<10 ; i++) /* running a loop to take the order */
        {
            printf(" Enter the item name \n");
            scanf(" %c",&itemName[i]);
            printf(" Enter the item price \n");
            scanf(" %d",&itemPrice[i]);
            count++; /* counting the number of the items to know if there is a discount or not*/
            totalprice=totalprice+itemPrice[i]; /* summing the total price */
            printf(" To finish shopping enter 0 and to continue enter 1 \n"); /* the choice for the user to end or continue shopping */
            scanf(" %d",&choice2);
            if(choice2==0)
            {
                break;
            }
        }
        printf(" If overnight shipping is required enter 1 else enter 0 \n ");
        scanf(" %d",&overnightShipping); /* to know if overnight shipping is required to increase the shipping fees by 5$ */
        if(totalprice<10 && overnightShipping==0 ) /* making conditions to calculate shipping and total fees */
        {
            shipping=2;
            totalfee=totalprice+shipping;
        }
        else if(totalprice>=10 && overnightShipping==0 )
        {
            shipping=3;
            totalfee=totalprice+shipping;
        }
        else if(totalprice<10 && overnightShipping==1 )
        {
            shipping=7;
            totalfee=totalprice+shipping;
        }
        else if(totalprice>=10 && overnightShipping==1 )
        {
            shipping=8;
            totalfee=totalprice+shipping;
        }
        else
        {
            exit(0);
        }
        if(count>=5)  /* making condition if items equal 5 or more there is 20% dicount */
        {
            discount=totalfee*0.2;
            totalfee=totalfee-discount;
        }
        printf(" Your receipt \n");
        for(i=0 ; i<count; i++) /* printing the receipt */
        {
            printf(" %c %d \n",itemName[i],itemPrice[i]);

        }
        printf(" shipping price = %d \n",shipping);
        printf(" total fee = %f \n",totalfee);
        break;
    case 0:
        exit(0);
    }

    return 0;
}

/* ********************** Main call Section End ******* */

