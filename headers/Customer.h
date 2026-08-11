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

	Customer(Customer customer);

	// accessors
	int get_cid();
	std::string get_first_name();
	std::string get_last_name();
	std::string get_addr();
	std::string get_phone_num();
	std::string get_email_addr();


};


#endif