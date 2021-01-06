#include <iostream>
#include <string>
#include <vector>

using namespace std ;

int main() {
    int num{10};
    int *ptr_num {nullptr};

    ptr_num=&num;
    cout << "num=" << num << endl ; 
    cout << "ptr_num=" << ptr_num << endl ; 
    cout << "*ptr_num=" << *ptr_num << endl ; 
    *ptr_num=200;
    cout << "ptr_num=" << ptr_num << endl ; 
    cout << "*ptr_num=" << *ptr_num << endl << endl ; 


    double low_temp {64.8};
    double high_temp {98.8};
    double *temp_ptr {nullptr};

    temp_ptr=&low_temp;
    cout << "temp_ptr" << temp_ptr << endl ; 
    cout << "*temp_ptr" << *temp_ptr << endl << endl ; 
    temp_ptr=&high_temp;
    cout << "temp_ptr" << temp_ptr << endl ; 
    cout << "*temp_ptr" << *temp_ptr << endl << endl ; 
    *temp_ptr=99.1;
    cout << "temp_ptr" << temp_ptr << endl ; 
    cout << "high_temp" << high_temp << endl ; 
    cout << "*temp_ptr" << *temp_ptr << endl << endl ; 

    string name="Vibin";
    string *string_ptr {&name};
    cout << "*string_ptr:" << *string_ptr << endl ;
    name="Febin";
    cout << "*string_ptr:" << *string_ptr << endl << endl ;
    
    
    vector <string> mynames {"Larry","Moe","Curly"};
    vector <string> *vec_ptr{nullptr};

    vec_ptr=&mynames;
    cout << "First Name:" << (*vec_ptr).at(0) << endl ; 
    cout << "Second Name:" << (*vec_ptr).at(1) << endl ; 
    cout << "Third Name:" << (*vec_ptr).at(2) << endl ; 

    vec_ptr=&mynames;
    for (auto name:*vec_ptr)
        cout << name << "\t";
    cout << endl << endl ; 
    


    return 0; 
}