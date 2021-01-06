#include <iostream>
using namespace std ; 

int main () {
    int score {} ; 
    cout << "Enter your scrore.." << endl ;
    cin >> score ; 

    char grade {} ;

    if (score>=0 || score<=100) {
        if (score>90) {
            grade='A';
            cout << "your grade is " << grade << endl ; 
        }
        else if (score>80) {
            grade='B';
            cout << "your grade is " << grade << endl ; 
        }
        else if (score>60) {
            grade='c';
            cout << "your grade is " << grade << endl ; 
        }
        else if (score>40) {
            grade='D';
            cout << "your grade is " << grade << endl ; 
        }
        else {
            grade='E';
            cout << "Sorry@!!your grade is " << grade << " Please prepeat class!" << endl ; 
        }

    }
}