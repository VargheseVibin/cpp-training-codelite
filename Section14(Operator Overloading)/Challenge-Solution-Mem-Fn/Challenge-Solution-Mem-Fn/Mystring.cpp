#include "Mystring.h"
#include <cstring>
#include <iostream>

//No Args Constructor
Mystring::Mystring()
    :str{nullptr} {
//        std::cout << "Default No-Args Constuctor" << std::endl ; 
        str=new char[1];
        *str='\0';
}

//Overloaded Constrcuctor
Mystring::Mystring(const char* s) 
    :str{nullptr} {
//        std::cout << "Overloaded Constuctor" << std::endl ; 
        str=new char[std::strlen(s)+1];
        std::strcpy(str,s);
        str[std::strlen(s)]='\0';
}

//Copy Constructor ==> Deep Copy
Mystring::Mystring(const Mystring &s) {
//    std::cout << "Copy Constuctor" << std::endl ; 
    str=nullptr;
    str=new char[std::strlen(s.str)+1];
    std::strcpy(str,s.str);
    str[std::strlen(s.str)]='\0';
}

//Move Constrcutor
Mystring::Mystring(Mystring &&s) {
//    std::cout << "Move Constuctor" << std::endl ; 
    str=nullptr ; 
    str=s.str;              //grab address from source
    s.str=nullptr;          //delete source ptr
}


//Copy Assignment
Mystring& Mystring::operator=(const Mystring &s) {
//    std::cout << "Copy Assignment" << std::endl ; 
    if(this==&s)
        return *this ; 
    else {
        str=new char[std::strlen(s.str)+1];
        std::strcpy(str,s.str); 
        str[std::strlen(s.str)]='\0';
        return *this;
    }
}

//Move Assignment
Mystring& Mystring::operator=(Mystring &&s) {
//    std::cout << "Move Assignment" << std::endl ; 
    str=nullptr ; 
    str=s.str ; 
    s.str=nullptr ; 
    return *this ; 
}

Mystring Mystring::operator-() {
    char* buff=new char[std::strlen(str)+1];
    for(size_t i{0}; i<std::strlen(str);++i) {
        buff[i]=std::tolower(str[i]);
    }
    buff[std::strlen(str)]='\0';
    Mystring temp=Mystring(buff);
    return temp ; 
    delete [] buff ; 
}

Mystring Mystring::operator+(const Mystring &rhs) {
    char* buff=new char[std::strlen(str)+std::strlen(rhs.str)+1];
    std::strcpy(buff,str);
    std::strcat(buff,rhs.str);
    buff[std::strlen(str)+std::strlen(rhs.str)]='\0';
    Mystring temp=Mystring(buff);
    return temp ; 
    delete [] buff ; 
}

Mystring& Mystring::operator+=(const Mystring &rhs) {
    std::strcat(str,rhs.str);
    str[std::strlen(str)+std::strlen(rhs.str)]='\0';
    return *this ; 
}



bool Mystring::operator==(const Mystring &rhs) {
    if(std::strcmp(str,rhs.str)==0)
        return true;
    else
        return false ; 
}

bool Mystring::operator!=(const Mystring &rhs) {
    if(std::strcmp(str,rhs.str)==0)
        return false;
    else
        return true ; 
}

bool Mystring::operator>(const Mystring &rhs) {
    if(std::strcmp(str,rhs.str)>0)
        return true;
    else
        return false ; 
}

bool Mystring::operator<(const Mystring &rhs) {
    if(std::strcmp(str,rhs.str)<0)
        return true;
    else
        return false ; 
}

Mystring Mystring::operator*(size_t &&n) {
    char* buff=new char[(std::strlen(str)*n)+1];
    for(size_t i{0};i<n;i++)
        if (i==0)
            std::strcpy(buff,str);
        else
            std::strcat(buff,str);
    buff[(std::strlen(str)*n)]='\0';
    Mystring temp=Mystring(buff);
    delete [] buff ; 
    return temp ; 
}

Mystring& Mystring::operator*=(size_t &&n) {
    char* buff=new char[std::strlen(str)+1];
    std::strcpy(buff,str);
    for(size_t i{0};i<n;i++)
        std::strcat(str,buff);
    str[(std::strlen(buff)*n)]='\0';
    delete [] buff ; 
    return *this ; 
}


Mystring::~Mystring()   {
    if(str==nullptr)
        std::cout << "Deconstructor for Mystring:: nullptr" << std::endl ; 
    else
        std::cout << "Deconstructor for Mystring::" << this->str << std::endl ; 
}

void Mystring::display() const {
    std::cout << "Mystring is ::" << str << std::endl ; 
}


std::ostream& operator<<(std::ostream &os, const Mystring &s) {
    os << s.str ; 
    return os ; 
}

std::istream& operator>>(std::istream &is, Mystring &s) {
    char* buff=new char [1000];
    is >> buff ; 
    s=Mystring(buff);
    delete [] buff ; 
    return is ; 
}

Mystring& Mystring::operator++() {
    for(size_t i{0};i<std::strlen(str);++i)
        str[i]=std::toupper(str[i]);
    return *this ; 
        
}

Mystring Mystring::operator++(int) {
    Mystring temp(str);
    operator++();
    return temp ; 
}
