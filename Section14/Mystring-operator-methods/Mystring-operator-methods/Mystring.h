#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char* str;
public:
    Mystring();
    Mystring(const char* s);
    Mystring(const Mystring &s);
    Mystring& operator=(const Mystring &rhs);
    Mystring& operator=(Mystring &&rhs);
    bool operator==(const Mystring &rhs);
    Mystring operator-();
    Mystring operator+(const Mystring &obj);
    void display();
    ~Mystring();

};

#endif // _MYSTRING_H_
