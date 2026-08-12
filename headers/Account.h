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
	int m_acc_num;                    //    Account number
	int m_cid;                       //     customer id 
	std::string m_acc_type;         //      Account type
	double m_balance;              //       current balance
	std::string m_acc_status;     //        Account Status
	std::string m_date_opened;   //         Date when account was opened.
public:

	Account(int acc_num,
		int cid,
		std::string acc_type,
		double init_balance,
		std::string acc_status,
		std::string date_opened);

	// public interface

	// Accessors - retrieve current values of data attrs
	int get_acc_num();
	int get_cid();
	std::string get_acc_type();
	double get_balance();
	std::string get_acc_status();
	std::string get_date_opened();

	//------------------------------------------------

	// Mutators - update current values of data attrs
	set_acc_num(int acc_num);
	set_cid(int cid);
	set_acc_type(std::string acc_type);
	set_balance(double balance);
	set_acc_status(std::string acc_status);
	set_date_opened(std::string date);


	//----------------------------------------------------


	
	
};

#endif 
