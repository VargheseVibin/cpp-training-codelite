#include <iostream>
#include <string>

using namespace std ; 

class Account {
private:
    //attributes
    string name ; 
    double balance ; 

public: 
    //methods
    //declares inline
    void setBalance (double bal) { balance=bal ;}
    double getBalance() {return balance ; }

    //methods implemented outside the class declaration
    void setName (string s);
    string getName ();

    bool deposit (double amt) ;
    bool withdraw (double amt) ; 
};

void Account::setName (string s) {
    name=s;
}

string Account::getName() {
    return name; 
}

bool Account::deposit (double amt) {
    balance+=amt ; 
    return true;
}

bool Account::withdraw (double amt) {
    if (balance>=amt) {
        balance-=amt;
        return true ;
    }
    else 
        return false ; 
    
}


int main() {
    Account vibin_acc;
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