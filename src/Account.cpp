/*
*  Author : Stephen Aranda
*  File   : Account.cpp
*  Date   : 8-11-26
*  Desc   : Definition for the Account class
*/

#include<headers/Account.h>

// standard arg constructor for obj initialization.
Account::Account(int acc_num,
	int cid,
	std::string acc_type,
	double init_balance,
	std::string acc_status,
	std::string date_opened) {
	this->m_acc_num = acc_num;
	this->m_cid = cid;
	this->m_acc_type = acc_type;
	this->m_balance = init_balance;
	this->m_acc_status = acc_status;
	this->m_date_opened = date_opened;
}

// Accessor defs
int Account::get_acc_num()             { return m_acc_num;     }
int Account::get_cid()                 { return m_cid;         }
std::string Account::get_acc_type()    { return m_acc_type;    }
double Account::get_balance()          { return m_balance;     }
std::string Account::get_acc_status()  { return m_acc_status;  }
std::string Account::get_date_opened() { return m_date_opened; }


// Mutator defs
Account::set_acc_num(int acc_num)               { this->m_acc_num = acc_num;       }
Account::set_cid(int cid)                       { this->m_cid = cid;               }
Account::set_acc_type(std::string acc_type)     { this->m_acc_type = acc_type;     }
Account::set_balance(double balance)            { this->m_balance = balance;       }
Account::set_acc_status(std::string acc_status) { this->m_acc_status = acc_status; }
Account::set_date_opened(std::string date)      { this->m_date_opened = date;      }
