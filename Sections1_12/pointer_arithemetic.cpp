#include <iostream>
#include <vector>
using namespace std ;

int main() {
    int scores [] {100,87,65,78,-1};
    int *scores_ptr {scores};

    // while (*scores_ptr!=-1) {
    //     cout << "Values at location " << scores_ptr << " is:" << *scores_ptr << endl << endl ;;
    //     scores_ptr++;
    // }

    while (*scores_ptr!=-1) 
        // cout << "Values at location " << scores_ptr << " is:" << (*scores_ptr++) << endl << endl ;
        cout << *scores_ptr++ << endl << endl ;



    cout << "\n-------------------------" << endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    string *p1 {&s1};		
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha;
    cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl;		// false
    cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl;		// true

    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl;		// true
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// true
    
    p3 = &s3;   // point to James
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// false
    

    cout << "\n-------------------------" << endl;
    char name[]  {"Frank"};
    
    char *char_ptr1 {nullptr};
    char *char_ptr2{nullptr};
    
    char_ptr1 = &name[0];   // F
    char_ptr2 = &name[3];   // n

    cout << "In the string " << name << ",  " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " <<  *char_ptr1  << endl; 
    
    cout << endl;

    double temps[] {100.4,67.8,89.0,75.6};
    double *temp_ptr {temps};
    cout << "*temp_ptr" << *temp_ptr << endl ; 
    cout << "*(temp_ptr+1)" << *(temp_ptr+1) << endl ; 
    cout << "temp_ptr" << temp_ptr << endl ; 
    cout << "(temp_ptr+1)" << (temp_ptr+1) << endl ; 
    cout << "Two temps in the array temps are " << (temp_ptr+1)-temp_ptr << " bytes apart!";



    return 0 ;
} 