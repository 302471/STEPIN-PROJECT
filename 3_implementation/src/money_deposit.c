#include<stdio.h>
#include "atm.h"
/**
 * @brief function to deposit the amount
 * 
 * @param list structure of customer
 * @param s number of customers
 * @param number account number of customer 
 * @param amt deposit amount
 */
void money_deposit(struct customer list[100], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found");
    } 
    else
    {
        list[i].balance += amt;
    }
}
