#pragma once
#include<cstring>
#include<iostream>
#include "BankAccount.h"
using namespace std;


class BankAccount
{
    
    private:

        string AccountID;
        double balance;
        BankAccount(string A, double B)
        {
            AccountID = A;
            balance = B;
        }
        virtual ~BankAccount()
        {
            balance = 0;
        }
        void setAccountID(string AccountID)
        {
            AccountID = AccountID;
        }
        string getAccountID()
        {
            return AccountID;
        }
        void setBalance(double balance)
        {
            balance = balance;
        }
        double getBalance()
        {
            return balance;
        }
      void withdraw (double balance)
        {
            if (balance < balance)
            {
                cout << "The balance is insufficient" << endl;
            }
            else
            {
                balance = balance - balance;
                cout << "The balance is sufficient" << endl;
            }
        }
    };
class SavingBankAccount :public BankAccount 
{



};




