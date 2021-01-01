#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account vibin_acc;
//    vibin_acc.balance=1200.0; //Compiler Error
    vibin_acc.setName("Vibin's Account");
    vibin_acc.setBalance(10000.0);
    if (vibin_acc.deposit(1500.0))
        cout << "Deposit OK" << endl ; 
    else 
        cout << "Deposit Failed" << endl; 

    if (vibin_acc.withdraw(800.0)) 
        cout << "Withdrawl OK" << endl ; 
    else 
        cout << "Sorry! Not enough balance!" << endl  ; 

    if (vibin_acc.withdraw(50000.0)) 
        cout << "Withdrawl OK" << endl ; 
    else 
        cout << "Sorry! Not enough balance!" << endl  ; 



    return 0;
}