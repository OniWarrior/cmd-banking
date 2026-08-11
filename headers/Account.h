/*
 * Author : Stephen Aranda
 * File   : Account.h
 * Date   : 8-11-26
 * Desc   : Class declaration for Account class for customer account.
 */

#ifndef __ACCOUNT__
#define __ACCOUNT__
#include<string>

class Account {
private:
	int m_acc_num;                   //    Account number
	int m_cid;                      //     customer id 
	std::string m_acc_type;        //      Account type
	double m_balance;             //       current balance
	std::string m_acc_status     //        Account Status
    std::string m_date_opened   //         Date when account was opened.
public:

	
	
};

#endif 
