#include "Mystring.h"
#include <iostream>
#include <cstring>

//No-Args Constrcutor
Mystring::Mystring() 
    :str{nullptr} {
        str= new char[1];
        *str='\0';
}

//Overloaded Constructor
Mystring::Mystring(const char* s) 
    :str{nullptr} {
        if(s==nullptr) 
            Mystring();
        else {
            str=new char[std::strlen(s)+1];
            std::strcpy(str,s);
            str[std::strlen(s)]='\0';
        }
}

Mystring::Mystring(const Mystring &s) {
        if(this==&s)
            return ;
        else {
            str=new char[std::strlen(s.str)+1];
            std::strcpy(str,s.str) ; 
            str[std::strlen(s.str)]='\0';
            
        }
}

Mystring::Mystring(Mystring &&s) {
    str=new char[std::strlen(s.str)+1];
    str=s.str ; 
    s.str=nullptr ; 
}

Mystring& Mystring::operator=(const Mystring &rhs) {
    std::cout << "Invoking Copy Assignment" << std::endl ; 
    if (this==&rhs)
        return *this ; 
    else  { 
        str=nullptr ; 
        str=new char[std::strlen(rhs.str)+1];
        std::strcpy(str,rhs.str) ; 
        str[std::strlen(rhs.str)]='\0';
        return *this ; 
    }
}

Mystring& Mystring::operator=(Mystring &&s) {
    std::cout << "Invoking Move Assignment" << std::endl ; 
    str=nullptr;
    str=s.str;
    s.str=nullptr ; 
    return *this ; 
    
}

Mystring::~Mystring() {
    if (str==nullptr) 
        std::cout << "Deconstructor to remove Mystring:nullptr" << std::endl ; 
    else 
        std::cout << "Deconstructor to remove Mystring:" << str <<  std::endl ; 
}

std::ostream& operator<<(std::ostream &os,const Mystring &s) {
    os << s.str ; 
    return os; 
}

std::istream& operator>>(std::istream &is,Mystring &s) {
    char* buff=new char[1000];
    is >> buff ; 
    s=Mystring(buff);
    delete [] buff ; 
    return is ; 
}


//    Mystring();                         //Default Constrcutor
//    Mystring(const char* s);            //Overloaded Constrcutor
//    Mystring(const Mystring &s);        //Copy Constrcutor
//    Mystring(Mystring &&s);             //Move Constrcutor
//    ~Mystring();                        //Desctructor
//    
//    Mystring& operator=(const Mystring &rhs) ;      //Copy Asssignment
//    Mystring& operator=(Mystring &&s);              //Move Assignment
//    
//    void display() const ; 
