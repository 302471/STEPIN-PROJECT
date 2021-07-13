#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include"../inc/ATM.h"

//#include "ATM.h"



/*void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();*/


/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
    
}




void test_BALANCE_INFO(void){
TEST_ASSERT_EQUAL(1,BALANCE_INFO(15000));

}

void test_MONEYDEPOSIT_INFO(void){
TEST_ASSERT_EQUAL(1,MONEYDEPOSIT_INFO(15000+DEPOSIT));
}

void test_MONEYWITHDRAW_INFO(void){
TEST_ASSERT_EQUAL(1,MONEYWITHDRAW_INFO(15000-WITHDRAW));
}




int main(void){
/*Initiate the unity Test Framework */
UNITY_BEGIN();



/* Run Test Function */

/*RUN_TEST(Check_input_main_menu);
RUN_TEST(check_choose_module);
RUN_TEST(check_input_checkBalance);
RUN_TEST(check_input_moneyDeposit);
RUN_TEST(check_input_moneyWithdraw);
RUN_TEST(check_menuExit);
RUN_TEST(check_errorMessage);
*/

RUN_TEST(void test_BALANCE_INFO(void));
RUN_TEST(void test_MONEYDEPOSIT_INFO(void));



RUN_TEST(void test_MONEYWITHDRAW_INFO(void));



 /* Close the Unity Test Framework */
    return UNITY_END();
}

