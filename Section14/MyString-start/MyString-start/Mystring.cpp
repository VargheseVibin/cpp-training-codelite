#include <cstring>
#include "Mystring.h"
#include <iostream>


Mystring::Mystring() 
    :str{nullptr} {
        str=new char[1];
        *str='\0';
}

Mystring::Mystring(const char* s) 
    :str{nullptr} {
        if(s==nullptr) {
            *str='\0';
        }
        else {
            str=new char[std::strlen(s)+1];
            std::strcpy(str,s);
//            *str[std::strlen(s)]='\0';
        }
}

Mystring::Mystring(const Mystring &s) 
    :str{nullptr} {
        str=new char[s.getLength()+1];
        std::strcpy(str,s.str);
}

Mystring::~Mystring() {
    delete [] str;
}

//Display Method
void Mystring::display() const {
    std::cout << "My String is:" << str << " with length:" << getLength() << std::endl ; 
}

//Length Getter
int Mystring::getLength() const {
    return std::strlen(str); 
}

const char* Mystring::getStr() const {
    return str ; 
}


