#include<stdio.h>
#include "atm.h"
/**
 * @brief function to accept the customer details
 * 
 * @param list structure of customers 
 * @param s number of customers
 */
void money_accept(struct customer list[100], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record #%d", i + 1);
        printf("\nEnter account_no : ");
        scanf("%d", &list[i].account_no);
        printf("Enter name : ");
        scanf("%s",&list[i].name);
        list[i].balance = 0;
    } 
}
