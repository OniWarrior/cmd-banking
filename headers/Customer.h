/*
* Author : Stephen Aranda
* File   : Customer.h
* Desc   : File for the declaration of Customer class for a customer
* Date   : 8/9/26
*/

#ifndef __Customer__
#define __Customer__
#include<string>

class Customer {
private:
	int m_cid;                      // customer id
	std::string m_first_name;      //  customer first name
	std::string m_last_name;      //   customer last name
	std::string m_addr;          //    customer address
	std::string m_phone_num;    //     customer phone number
	std::string m_email_addr;  //      customer email address
public:

	Customer(int cid,
		     std::string f_name,
		     std::string l_name,
		     std::string addr,
		     std::string phone_num,
		     std::string email_addr);

	// accessors - methods to retrieve current attribute values of object
	int get_cid();
	std::string get_first_name();
	std::string get_last_name();
	std::string get_addr();
	std::string get_phone_num();
	std::string get_email_addr();

	// mutators - methods to set/update attribute values of object
	set_cid(int cid);
	set_first_name(std::string f_name);            // f_name    : new first name param
	set_last_name(std::string l_name);            //  l_name    : new last name param
	set_addr(std::string addr);                  //   addr      : new address param
	set_phone_num(std::string phone_num);       //    phone_num : new phone number param
	set_email_addr(std::string email_addr);    //     email_addr: new email address param
};


#endif