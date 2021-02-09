#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char* str ;
public:
    Mystring();                                     //default Contrcutor
    Mystring(const char* s);                        // Default constructor with Value
    Mystring(const Mystring &s);                    //
    Mystring& operator=(const Mystring &s);
    Mystring& operator=(Mystring &&s);
    void display();
    ~Mystring();

};

#endif // _MYSTRING_H_
//
//    Mystring a {"Hello"} ;          //Overloaded Assignment Constructor
//    Mystring b;                     //No Args Constructor
//    a.display() ; 
//    b.display() ; 
//    b=a ; 