/*
* Author : Stephen Aranda
* File   : Account.h
* Desc   : File for the declaration of Account class for a customer
* Date   : 8/9/26
*/

#ifndef __Account__
#define __Account__
#include<string>

class Account {
private:
	int m_cid;                      // customer id
	std::string m_first_name;      //  customer first name
	std::string m_last_name;      //   customer last name
	std::string m_addr;          //    customer address
	std::string m_phone_num;    //     customer phone number
	std::string m_email_addr;  //      customer email address

};


#endif