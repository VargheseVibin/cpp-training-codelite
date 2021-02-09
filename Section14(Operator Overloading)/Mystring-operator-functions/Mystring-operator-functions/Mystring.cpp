#include "Mystring.h"
#include <cstring>
#include <iostream>


Mystring::Mystring()
    :str{nullptr} {
        str=new char[1];
        *str='\0';
}

Mystring::Mystring(const char* s) 
    :str{nullptr} {
        str=new char[std::strlen(s)+1];
        std::strcpy(str,s);
        str[std::strlen(s)+1]='\0';
}


Mystring::Mystring(const Mystring &s) 
    :str{nullptr} {
        str=new char[std::strlen(s.str)+1];
        std::strcpy(str,s.str);
        str[std::strlen(s.str)+1]='\0';
}
        
Mystring& Mystring::operator =(const Mystring &s) {
    if (this==&s)
        return *this ;
    else {
        str=nullptr ; 
        str=new char[std::strlen(s.str)+1];
        std::strcpy(str,s.str);
        str[std::strlen(s.str)+1]='\0';
        return *this;
    }
}

Mystring& Mystring::operator =(Mystring &&s) {
    str=nullptr ; 
    str=s.str;
    s.str=nullptr;
    return *this ; 
}


Mystring::~Mystring() {
    if (str==nullptr)
        std::cout << "Desctructor called for Mystring: nullptr" << std::endl;
    else 
        std::cout << "Destrcutor called for Mystring:" << str << std::endl ; 
}

bool operator==(const Mystring &lhs,const Mystring &rhs)  {
    return((std::strcmp(lhs.str,rhs.str))==0);
}

Mystring operator+(const Mystring &lhs,const Mystring &rhs) {
    char* buff=new char[std::strlen(lhs.str)+std::strlen(rhs.str)+1];
    std::strcpy(buff,lhs.str);
    std::strcat(buff,rhs.str);
    buff[std::strlen(lhs.str)+std::strlen(rhs.str)]='\0';
    Mystring temp(buff) ; 
    delete [] buff ; 
    return temp ; 
}

Mystring operator-(const Mystring &s) {
    char* buff=new char[std::strlen(s.str)+1];
    for(size_t i{0}; i<std::strlen(s.str);++i) 
        buff[i]=std::tolower(s.str[i]);
    buff[std::strlen(s.str)]='\0';
    Mystring temp(buff) ; 
    delete [] buff ; 
    return temp ; 
}

void Mystring::display() const {
    std::cout << "Mystring is:" << str << std::endl ; 
}

//    friend bool operator==(const Mystring &lhs,const Mystring &rhs) ; 
//    friend Mystring operator+(const Mystring &lhs,const Mystring &rhs) ; 
//    friend Mystring operator-(const Mystring &s) ;

