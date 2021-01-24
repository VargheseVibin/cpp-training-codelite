#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend bool operator==(const Mystring& lhs, const Mystring& rhs);
    friend bool operator!=(const Mystring& lhs, const Mystring& rhs);
    friend bool operator>(const Mystring& lhs, const Mystring& rhs);
    friend bool operator<(const Mystring& lhs, const Mystring& rhs);
    friend Mystring operator-(const Mystring& s) ; 
private:
    char* str ; 
public:
    Mystring();                                         //Default No Args Constrcutor
    Mystring(const char* s);                            //Overloaded Constructor
    Mystring(const Mystring &str);                      //Copy Constructor
    Mystring(Mystring &&s);                             //Move Constructor
    
    Mystring& operator=(const Mystring &str);           //Copy Assignment
    Mystring& operator=(Mystring &&str);                //Move Assignment
    
//    Mystring& operator=(const Mystring &s);         //Copy Assignment                           b=a
//    Mystring& operator=(Mystring &&s);              //Move Assignment                           b=Mystring("Febin")
    
    void display()  ; 
    
    ~Mystring();
    


};

#endif // _MYSTRING_H_
