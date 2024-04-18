#pragma once

#include <iostream>
#include <string>
#include <vector>

using std::string;

class Bank {
private:
    // possibly add currency
    string name, address, gender;
    int age, id;
    double balance, deposit, withdrawal;

public:
    Bank();
    Bank(string name, string address, string gender, int age, int ID, double balance, double deposit, double withdrawal);
    void setName(string);
    void setAddress(string);
    void setGender(string);
    void setAge(int);
    void setID(int);
    void setBalance(double);
    void setDeposit(double);
    void setWithdrawal(double); //maybe change to withdraw instead of setwithdrawal
    string getName();
    string getAddress();
    string getGender();
    int getAge();
    int getID();
    double getBalance();
    double getDeposit();
    double getWithdrawal(); // might not need this
    void printUser();
};

void BankOfBanks();