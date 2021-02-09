#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account {
private:
    //attributes
    std::string name ; 
    double balance ; 

public: 
    //methods
    //declares inline
    void setBalance (double bal) { balance=bal ;}
    double getBalance() {return balance ; }

    //methods implemented outside the class declaration
    void setName (std::string s);
    std::string getName ();

    bool deposit (double amt) ;
    bool withdraw (double amt) ; 
};
#endif // _ACCOUNT_H_
