#include<stdio.h>
#include "atm.h"
/**
 * @brief function to display the customers
 * 
 * @param list structure of customers
 * @param s number of customers 
 */
void money_display(struct customer list[100], int s)
{
    int i;

    printf("\n\nA/c No\tName\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", list[i].account_no, list[i].name,
            list[i].balance);
    } 
}