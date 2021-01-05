#include "Mystring.h"
#include <cstring>
#include <iostream>


//    Mystring();
//    Mystring(const char* s);
//    Mystring(const Mystring &s);
//    Mystring& operator=(const Mystring &rhs);   //Returns reference to Mystring. 
//                                                //Could also be written Mystring &operator=(const Mystring &rhs);
//                                                //Bloody thing(above way of writing it) confuses the c***p out of me!
//    void display() const ;
//    int getLength() const ; 
//    const char* getStr() const ; 
//    ~Mystring();

Mystring::Mystring() 
    :str{nullptr} {
        str=new char[1];
        *str='\0';
}

Mystring::Mystring(const char* s) 
    :str{nullptr} {
        if(s==nullptr) {
            Mystring();
        }
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
        *(str+std::strlen(s.str)+1)='\0';
}

void Mystring::display() const {
    std::cout << "Mystring:" << str << " with length:" << getLength() << std::endl ; 
}

int Mystring::getLength() const {
    return std::strlen(str) ; 
}

Mystring::~Mystring() {
    delete [] str ; 
}

Mystring& Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy Assignment!" << std::endl ; 
    if(this==&rhs) {
        return *this ; 
    }
    else {
        delete [] this->str ;
        this->str=new char[std::strlen(rhs.str)+1];
        std::strcpy(this->str,rhs.str);
        *(this->str+std::strlen(rhs.str))='\0';
        return *this ; 
    }
}


