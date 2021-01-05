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
    Mystring& operator=(const Mystring &rhs);   //Returns reference to Mystring. 
                                                //Could also be written Mystring &operator=(const Mystring &rhs);
                                                //Bloody thing(above way of writing it) confuses the c***p out of me!
    void display() const ;
    int getLength() const ; 
    const char* getStr() const ; 
    ~Mystring();

};

#endif // _MYSTRING_H_
