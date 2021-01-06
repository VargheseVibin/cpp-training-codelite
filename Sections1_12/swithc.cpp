#include <iostream>
using namespace std ; 

int main () {

    cout << "Enter the greade you desire for exam:"  ; 
    char grade {};
    cin >> grade ; 

    switch (grade) {
    case 'a':
    case 'A':
        cout << "You need to score at least 90.. Study Hard!" << endl ; 
        break;
    case 'b':
    case 'B':
        cout << "You need to score 80-89 marks, Go Study!" << endl ;
        break; 
    case 'c':
    case 'C':
        cout << "You need to score 70-79" << endl ; 
        break ;
    case 'd':
    case 'D':
        cout << "Hmm, try for better grade" << endl; 
        break;
    case 'f':
    case 'F':
        {
            char confirm {};
            cout << "Are you sure (Y/N):" ;
            cin >> confirm ;
            if (confirm=='y'||confirm=='Y') {
                cout << "You  should strive for a better grade" << endl ; 
            }
            else if (confirm=='n'||confirm=='N') {
                cout << "Good, Go study!" << endl ; 
            }
            else {
                cout << "Enter Y/N" << endl ;
            }
        }
        break;
    default:
        cout << "not a valid grade" << endl; 
        break;
    }
    return 0 ;
}