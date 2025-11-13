#include <iostream>

class Account{
private: 
int accountNumber;
double balance;
double minimalBalance;
double overdraftFee;

public:
Account(int accNum, double bal, double minBal, double odFee);

int getAccountNumber();

void setAccountNumber(int newAccountNumber);

double getBalance();

void setBalance(double newBalance);

double getMinimalBalance();

void setMinimalBalance(double newMinimalBalance);

double getOverdraftFee();

void setOverdraftFee(double newOverdraftFee);

void DepositFunds(double amount);

void WithDrawFunds(double amount);

void PrintAccountInfo();

};

class Customer{


};

class Bank {


};