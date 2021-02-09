#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"
#include <iostream>
#include <string>

class CheckingAccount: public Account
{
protected:
private:
    static constexpr double withdrawlFees=1.50;
    static constexpr char* defaultName="Unnamed Checking Account";
    static constexpr double defaultBal=0.0;
public:
    CheckingAccount(std::string n=defaultName, double a=defaultBal);
    virtual ~CheckingAccount();
    virtual bool withdraw(double a) override;
    virtual bool deposit(double a) override;
    virtual void print(std::ostream& os) const override;

};

#endif // _CHECKING_ACCOUNT_H_
