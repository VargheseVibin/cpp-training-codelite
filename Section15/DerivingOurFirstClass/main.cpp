#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"

using namespace std;

int main() {
    cout << "Hello There!" << endl;
    
    cout << "\n ============== Account =====================" << endl ; 
    Account acc ; 
    acc.deposit(1000.0);
    acc.withdraw(1010.0);
    
    Account *p_Acc=new Account();
    p_Acc->deposit(2000.0);
    p_Acc->withdraw(2010.50);
    delete p_Acc ; 
    
    cout << "\n ==============Savings Account===============" << endl ; 
    SavingsAccount sAcc ;
    sAcc.deposit(3000.05);
    sAcc.withdraw(3010.25);
    
    SavingsAccount *p_sAcc=new SavingsAccount();
    p_sAcc->deposit(4000.05);
    p_sAcc->withdraw(4010.55);
    delete p_sAcc ; 
    
    
    
    return 0;
}