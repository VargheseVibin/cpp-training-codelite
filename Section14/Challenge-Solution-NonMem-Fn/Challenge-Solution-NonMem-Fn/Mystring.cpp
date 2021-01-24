#include "Mystring.h"
#include <cstring>
#include <iostream>

Mystring::Mystring() 
    :str{nullptr}   {
        std::cout << "No Args Constrcutor" << std::endl ; 
        str=new char[1];
        *str='\0';
}

Mystring::Mystring(const char* s) 
    :str{nullptr}   {
        std::cout << "Overloaded Constrcutor" << std::endl ; 
        str=new char[std::strlen(s)+1];
        std::strcpy(str,s);
        str[std::strlen(s)]='\0';
}

Mystring::Mystring(const Mystring &s) {
    std::cout << "Copy Constrcutor" << std::endl ; 
    if (this==&s)
        return;
    else {
        Mystring(s.str);
    }
}

Mystring::Mystring(Mystring &&s) {
    std::cout << "Move Constrcutor" << std::endl ; 
    str=nullptr;
    str=s.str; 
    s.str=nullptr;
}




Mystring& Mystring::operator=(const Mystring &s) {
    std::cout << "Copy Assignment" << std::endl ; 
    if(this==&s)
        return *this ; 
    else {
        str=new char[std::strlen(s.str)+1];
        std::strcpy(str,s.str); 
        str[std::strlen(s.str)]='\0';
        return *this;
    }
}

Mystring& Mystring::operator=(Mystring &&s) {
    std::cout << "Move Assignment" << std::endl ; 
    str=nullptr;
    str=s.str;
    s.str=nullptr; 
    return *this ; 
}


void Mystring::display()  {
    std::cout << "Mystring is:" << str << std::endl ;
}

Mystring::~Mystring()   {
    std::cout << "Destructor for:" << str << std::endl ; 
}

bool operator==(const Mystring &lhs, const Mystring &rhs) {
    if (std::strcmp(lhs.str,rhs.str)==0)
        return true ; 
    else
        return false ; 
}

bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    if (std::strcmp(lhs.str,rhs.str)==0)
        return false ; 
    else
        return true ; 
}

Mystring operator-(const Mystring &lhs) {
    char* buff=new char[std::strlen(lhs.str)+1];
    std::strcpy(buff,lhs.str);
    for(size_t i{0}; i < std::strlen(buff) ; ++i) {
        buff[i]=std::tolower(buff[i]);
    }
    buff[std::strlen(lhs.str)]='\0';
    Mystring temp;
    temp=Mystring(buff);
    delete [] buff ;  
    return temp ; 
}

bool operator>(const Mystring& lhs, const Mystring& rhs) {
    if (std::strcmp(lhs.str,rhs.str)>0)
        return true ; 
    else
        return false ; 
}

bool operator<(const Mystring& lhs, const Mystring& rhs) {
    if (std::strcmp(lhs.str,rhs.str)<0)
        return true ; 
    else
        return false ; 
}

