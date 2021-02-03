#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Account.h"
#include <iostream>
#include <string>


class TrustAccount: public Account
{
friend std::ostream& operator<<(std::ostream& os, TrustAccount& a) ; 
protected:
    size_t withdrawlCount;
private:
    static constexpr char* defaultName="Unnamed Trust Account";
    static constexpr double defaultBal=0.0;
    static constexpr size_t withdrawlLimit {3};
    static constexpr double bonusThreshold {5000.0};
    static constexpr double bonusAmount {50.0};
public:
    TrustAccount(std::string n=defaultName, double a=defaultBal);
    ~TrustAccount();
    virtual bool withdraw(double a);
    virtual bool deposit(double a);

};

#endif // _TRUST_ACCOUNT_H_


