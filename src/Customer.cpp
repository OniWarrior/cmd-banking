/*
 * Author : Stephen Aranda
 * File   : Customer.cpp
 * Date   : 8/10/26
 * Desc   : Declaration for Customer class from Customer.h
 */

#include<headers/Customer.h>

// Standard argument constructor to initialize Customer obj
Customer::Customer(int cid,
				   std::string f_name,
				   std::string l_name,
				   std::string addr,
				   std::string phone_num,
				   std::string email_addr) {
	this->m_cid         = cid;
	this->m_first_name  = f_name;
	this->m_last_name   = l_name;
	this->m_addr        = addr;
	this->m_phone_num   = phone_num;
	this->m_email_addr  = email_addr;
}

// get_cid(): retrieve the customer ID.
int Customer::get_cid() { return m_cid; }

// get_first_name(): retrieve the first name of customer
std::string Customer::get_first_name() { return m_first_name; }

// get_last_name(): retrieve the last name of customer
std::string Customer::get_last_name() { return m_last_name; }

// get_addr(): retrieve the address of the customer
std::string Customer::get_addr() { return m_addr; }

// get_phone_num(): retrieve the phone number of the customer
std::string Customer::get_phone_num() { return m_phone_num; }

// get_email_addr(): retrieve the email address of the customer
std::string Customer::get_email_addr() { return m_email_addr; }