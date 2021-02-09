#include "Mystring.h"
#include <iostream>
#include <cstring>

Mystring::Mystring()
    :str{nullptr} {
        str=new char[1];
        *str='\0';
}

Mystring::Mystring(const char* s) 
    :str{nullptr} {
        if (s==nullptr) {
            *str='\0';
        }
        else {
                str=new char[std::strlen(s)+1];
                std::strcpy(str,s);
                *(str+(std::strlen(s)))='\0';
        }
}

Mystring::Mystring(const Mystring &s) 
    :str {nullptr}   {
    str=new char [s.getLengthStr()+1];
    std::strcpy(str,s.str) ;
}

void Mystring::displayStr() const {
    std::cout << "Mystring is:" << str << std::endl ; 
}
int Mystring::getLengthStr() const {
    return std::strlen(str);
}
const char* Mystring::getStr() const  {
    return str ; 
}

Mystring::~Mystring()
    {
        delete [] str; 
}

