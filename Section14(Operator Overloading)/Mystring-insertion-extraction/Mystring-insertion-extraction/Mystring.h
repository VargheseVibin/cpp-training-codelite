#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>

class Mystring
{
    friend std::ostream& operator<<(std::ostream &os,const Mystring &s) ; 
    friend std::istream& operator>>(std::istream &is,Mystring &s) ;     
    private:
        char* str ; 
    public:
        Mystring();                         //Default Constrcutor
        Mystring(const char* s);            //Overloaded Constrcutor
        Mystring(const Mystring &s);        //Copy Constrcutor
        Mystring(Mystring &&s);             //Move Constrcutor
        ~Mystring();                        //Desctructor
        
        Mystring& operator=(const Mystring &rhs) ;      //Copy Asssignment
        Mystring& operator=(Mystring &&s);              //Move Assignment
        
        void display() const ; 
};

#endif // _MYSTRING_H_
