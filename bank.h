#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class BankAccount{
    int acc_id; //account id
    int acc_type; //account type
    int acc_up; //date of last update
    double acc_balance; //account balance
    int acc_years; //number of years for deposits and loans, non-loan accounts stay 00
    double acc_rate; //loan rate, non-loan accounts stay 00.00
    string acc_name; //name of customer owning this account

};

void sortAccounts (BankAccount ** listAccount);
BankAccount** readAccounts();
void updateAccounts(BankAccount **listAccount);
void displayAccounts(BankAccount **listAccount);


