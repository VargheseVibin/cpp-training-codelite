#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>

class Mystring
{
    friend std::ostream& operator<<(std::ostream &os,const Mystring &s);     //Output steam Override Operator
    friend std::istream& operator>>(std::istream &is,Mystring &s);           //Input steam Override Operator
private:
    char* str ; 
public:
    Mystring();                                     //No Args Constructor                       Mystring s{Mystring()}
    Mystring(const char* s);                        //Overloaded Constructor                    Mystring a{Mystring("Vibin")}
    Mystring(const Mystring &str);                  //Copy Constructor  - from lvalue   (&)     Mystring b{a};
    Mystring(Mystring &&s);                         //Move Constrcutor  - from rvalue   (&&)    Mystring c{Mystrting("Vibin)};
    Mystring& operator=(const Mystring &s);         //Copy Assignment                           b=a
    Mystring& operator=(Mystring &&s);              //Move Assignment                           b=Mystring("Febin")
    ~Mystring();                                    //Desctructor
    Mystring operator-();                           //Convert  Mystring to LowerCase
    Mystring operator+(const Mystring &s);          //Concatenate the str with the passed string
    bool operator==(const Mystring &s);             //Equaility Check returning True
    bool operator!=(const Mystring &s);             //Inequaility Check returning True
    bool operator>(const Mystring &s);              //GT Check returning True
    bool operator<(const Mystring &s);              //LT Check returning True
    void display() const;                           //Display str
    Mystring operator*(size_t &n);                  //"123"*3 = "123123123"
};

#endif // _MYSTRING_H_
