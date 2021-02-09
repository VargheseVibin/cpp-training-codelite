#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char* str ;
public:
    Mystring();
    Mystring(const char* s);
    Mystring(const Mystring &s);
    ~Mystring();
    void displayStr() const ;
    int getLengthStr() const ; 
    const char* getStr() const ; 

};

#endif // _MYSTRING_H_
