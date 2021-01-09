#include "Mystring.h"
#include <cstring>
#include <iostream>

Mystring::Mystring() 
    :str{nullptr}    {
        str=new char[1];
        *str='\0';
}

//Overloaded Constructor
Mystring::Mystring(const char* s) 
    :str{nullptr}   {
        if (s==nullptr)
            Mystring();
        else {
            str=new char[std::strlen(s)+1];
            std::strcpy(str,s);
            *(str+std::strlen(s))='\0';
        }
}

Mystring::Mystring(const Mystring &s) 
    :str{nullptr} {
            str=new char[std::strlen(s.str)+1];
            std::strcpy(str,s.str);
            *(str+std::strlen(s.str))='\0'; 
}

//Copy Constructor
Mystring& Mystring::operator=(const Mystring &s) {
    std::cout << "Using Copy Assignment" << std::endl ; 
    if (this==&s) {
        return *this;
    }
    else {
        delete [] this->str;
        str=new char[std::strlen(s.str)+1];
        std::strcpy(str,s.str);
        *(str+std::strlen(s.str))='\0';
        return *this ;
        
    }
}

Mystring& Mystring::operator =(Mystring &&s) {
    std::cout << "Using the Move Assignment" << std::endl ; 
    delete [] str ; 
    str=s.str ; 
    s.str=nullptr;
    return *this ;
}
    

void Mystring::display() {
    std::cout << "String is:" << str << std::endl ; 
}

Mystring::~Mystring() {
    if (str == nullptr) {
        std::cout << "Calling destructor for Mystring : nullptr" << std::endl;
    } else {
         std::cout << "Calling destructor for Mystring : " << str << std::endl;
    }
    delete [] str;
}

