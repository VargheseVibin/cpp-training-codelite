#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char* str ; 
public:
    Mystring();                                         //Default No Args Constrcutor
    Mystring(const char* s);                            //Overloaded Constructor
    Mystring(const Mystring &str);                      //Copy Constructor
    Mystring(Mystring &&s);                             //Move Constructor
    
    Mystring& operator=(const Mystring &str);           //Copy Assignment
    Mystring& operator=(Mystring &&str);                //Move Assignment
    
    void display()  ; 
    
    ~Mystring();

};

#endif // _MYSTRING_H_
