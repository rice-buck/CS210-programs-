#include <iostream>
#include "classes.hpp"
using namespace std;

int main(){
    Bank bank1(000000001);
    
    Customer c1 = bank1.createNewCustomer("John", "Doe");
    c1.getAccount().DepositFunds(1000);
    c1.getAccount().WithDrawFunds(50);

    c1.getAccount().PrintAccountInfo();

    Customer c2 = bank1.createNewCustomer("Jane", "Smith");
    c2.getAccount().DepositFunds(4000);
    c2.getAccount().WithDrawFunds(500);

    c2.getAccount().PrintAccountInfo();

    Customer c3 = bank1.createNewCustomer("Jim", "Adams");
    c3.getAccount().DepositFunds(4000);
    c3.getAccount().WithDrawFunds(500);
    c3.getAccount().WithDrawFunds(4495);

    c3.getAccount().PrintAccountInfo();

    Customer c4 = bank1.createNewCustomer("Sarah", "McCallister");
    c4.getAccount().DepositFunds(50000);
    c4.getAccount().WithDrawFunds(500);
    c4.getAccount().WithDrawFunds(365);
    c4.getAccount().WithDrawFunds(180);
    c4.getAccount().DepositFunds(500);

    c4.getAccount().PrintAccountInfo();

    Customer c5 = bank1.createNewCustomer("Steven", "Rogers");
    c5.getAccount().DepositFunds(400);
    c5.getAccount().WithDrawFunds(65);
    c5.getAccount().WithDrawFunds(45);
    c5.getAccount().WithDrawFunds(80);
    c5.getAccount().DepositFunds(33);

    c5.getAccount().PrintAccountInfo();



    return 0;
}