#include<stdio.h>
#include "atm.h"
/**
 * @brief function to withdraw the amount
 * 
 * @param list structure of customers
 * @param s number of customers
 * @param number account number of customer
 * @param amt amount to be withdrawn
 */
void money_withdraw(struct customer list[100], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found\n");
    } 
    else if (list[i].balance < amt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        list[i].balance -= amt;
    }
}
