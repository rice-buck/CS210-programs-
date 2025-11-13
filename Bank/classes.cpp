#include <iostream>
#include "classes.hpp"
using namespace std;


Account::Account(int accNum, double bal, double minBal, double odFee)
    : accountNumber(accNum), balance(bal), minimumBalance(minBal), overdraftFee(odFee) {}

int Account::getAccountNumber(){
    return accountNumber;
}

void Account::setAccountNumber(int newAccountNumber){
    accountNumber = newAccountNumber;
}

double Account::getBalance(){
    return balance;
}

void Account::setBalance(double newBalance){
    balance = newBalance;
}

double Account::getMinimumBalance(){
    return minimumBalance;
}

void Account::setMinimumBalance(double newMinimalBalance){
    minimumBalance = newMinimalBalance;
}

double Account::getOverdraftFee(){
    return overdraftFee;
}

void Account::setOverdraftFee(double newOverdraftFee){
    overdraftFee = newOverdraftFee;
}

void Account::DepositFunds(double amount){
    balance += amount;
}

void Account::WithDrawFunds(double amount){
    if(balance - amount >= minimumBalance){
        balance -= amount;
    } else if(balance - amount <= minimumBalance && balance - amount - overdraftFee > negLimit){
        balance -= amount;
        balance -= overdraftFee;
    } else {
        cout << "Not enough funds. This withdrawl would bring your balance below the minimum balance and the negative limit.\n";
    }
}

void Account::PrintAccountInfo(){
    cout << "================\n"<< "Account Number: " << accountNumber 
    << "\nBalance: " << balance 
    << "\nMinimum Balance: " 
    << minimumBalance << "\nOverdraft fee: " 
    << overdraftFee << "\n================\n\n";
}

int Account::incrAccountNumber = 1000; //increments account number

Customer::Customer(std::string fName, std::string lName) :
firstName(fName), lastName(lName), account(Account::incrAccountNumber++, 1000.0, 0.0, 30.0) {}

std::string Customer::getFirstName(){
    return firstName;
}
void Customer::setFirstName(std::string newFirstName){
    firstName = newFirstName;
}
std::string Customer::getLastName(){
    return lastName;
}
void Customer::setLastName(std::string newLastName){
    lastName = newLastName;
}
Account& Customer::getAccount(){
    return account;
}
void Customer::setAccount(Account newAccount){
    account = newAccount;
}

Bank::Bank(int routNum) : routingNumber(routNum) {}
Customer Bank::createNewCustomer(std::string first, std::string last){
    Customer c(first, last);
    return c;
}
int Bank::getRoutingNumber(){
    return routingNumber;
}
void Bank::setRoutingNumber(int newRoutingNumber){
    routingNumber = newRoutingNumber;
}