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
        if (s==nullptr) {
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
            *(str+std::strlen(s.str))='\0'; 
}


Mystring& Mystring::operator=(const Mystring &rhs) {
    if(this==&rhs)
        return *this;
    else {
        str=nullptr;
        str=new char[std::strlen(rhs.str)+1];
        std::strcpy(str,rhs.str);
        *(str+std::strlen(rhs.str))='\0'; 
        return *this ; 
    }
}

Mystring& Mystring::operator=(Mystring &&rhs)  {
    str=nullptr;
    str=rhs.str;                 //Copy Adress
    rhs.str=nullptr;            //Throw away the rhs pointer 
    return *this; 
}

bool Mystring::operator==(const Mystring &rhs) {
    if(std::strcmp(str,rhs.str)==0)
        return true;
    else
        return false ;
}


Mystring::~Mystring()   {
    if(str==nullptr)
        std::cout << "Desctructor to remove Mystring: nullptr" << std::endl ; 
    else
        std::cout << "Desctructor to remove Mystring:" << str << std::endl ; 
}

Mystring Mystring::operator-() {
    char* buff=new char[std::strlen(str)+1];
    for(size_t i{0};i<std::strlen(str);++i) {
        buff[i]=std::tolower(str[i]);
    }
    buff[std::strlen(str)]='\0';
    Mystring temp {buff};
    delete [] buff ; 
    return temp;
    
}

Mystring Mystring::operator+(const Mystring &obj) {
    char* buff=new char[std::strlen(obj.str)+std::strlen(str)+1];
    std::strcpy(buff,str);
    std::strcat(buff,obj.str);
    buff[std::strlen(obj.str)+std::strlen(str)]='\0';
    Mystring temp(buff);
    delete [] buff;
    return temp ; 
    
}

void Mystring::display() const {
    std::cout << "Mystring:" << str << std::endl ; 
}

//    Mystring();
//    Mystring(const char* s);
//    Mystring(const Mystring &s);
//    Mystring(Mystring &s);
//    Mystring& operator=(Mystring &rhs);
//    bool operator==(Mystring &rhs);
//    Mystring& operator-();
//    void display();
//    ~Mystring();