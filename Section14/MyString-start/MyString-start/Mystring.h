#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char* str ; //pointer to a char[] that holds a C-style string
public:
    Mystring();                         //NoArgs Constrcuctor
    Mystring(const char *s);            //Overloaded constructor
    Mystring(const Mystring &source) ;  //Copy Constructor
    ~Mystring();                        //Desctrcutor
    void display() const ; 
    int getLength() const ;
    const char* getStr() const ; 

};

#endif // _MYSTRING_H_
