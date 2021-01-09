#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend bool operator==(const Mystring &lhs,const Mystring &rhs) ; 
    friend Mystring operator+(const Mystring &lhs,const Mystring &rhs) ; 
    friend Mystring operator-(const Mystring &s) ; 
private:
    char *str ;
public:
    Mystring();
    ~Mystring();
    Mystring(const char* s) ;
    Mystring(const Mystring &s) ;
    Mystring& operator =(const Mystring &s) ;
    Mystring& operator =(Mystring &&s) ;
    void display() const ;
};

#endif // _MYSTRING_H_
