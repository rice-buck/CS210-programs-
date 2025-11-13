#include <iostream>

class Account{
private: 
int accountNumber;
double balance;
double minimumBalance;
double overdraftFee;


public:
static int incrAccountNumber;
//constructor
Account(int accNum, double bal, double minBal, double odFee);

//getters and setters
int getAccountNumber();
void setAccountNumber(int newAccountNumber);
double getBalance();
void setBalance(double newBalance);
double getMinimumBalance();
void setMinimumBalance(double newMinimalBalance);
double getOverdraftFee();
void setOverdraftFee(double newOverdraftFee);

//additonal methods
void DepositFunds(double amount);
void WithDrawFunds(double amount);
void PrintAccountInfo();

};

class Customer{
private:
std::string firstName;
std::string lastName;
Account account;

public:
//constructor
Customer(std::string fName, std::string lName);

//getters and setters
std::string getFirstName();
void setFirstName(std::string newFirstName);
std::string getLastName();
void setLastName(std::string newLastName);

//Account objects
Account& getAccount();
void setAccount(Account newAccount);
};

class Bank {
private:
int routingNumber;


public:
Bank(int routNum);
Customer createNewCustomer(std::string firstName, std::string lastName);
int getRoutingNumber();
void setRoutingNumber(int newRoutingNumber);
};