#include <iostream>
#include "classes.hpp"
using namespace std;

Account::Account(int accNum, double bal, double minBal, double odFee)
    : accountNumber(accNum), balance(bal), minimalBalance(minBal), overdraftFee(odFee) {}

int Account::getAccountNumber(){
    return accountNumber;
}

void Account::setAccountNumber(int newAccountNumber){
    accountNumber = newAccountNumber;
}

double Account::getBalance(){
    return balance;
}

void setBalance(double newBalance);

double getMinimalBalance();

void setMinimalBalance(double newMinimalBalance);

double getOverdraftFee();

void setOverdraftFee(double newOverdraftFee);

void DepositFunds(double amount);

void WithDrawFunds(double amount);

void PrintAccountInfo();