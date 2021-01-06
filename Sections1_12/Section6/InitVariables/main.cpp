#include <iostream>

using namespace std;

int main() {
    
     
    cout << "Enter the width of the room:"; 
    int roomWidth {0} ; 
    cin >> roomWidth;
    
    cout << "Enter the length of the room:" ;
    int roomLength {0} ;
    cin >> roomLength ; 
    
    cout << "Area of the room is " << roomLength*roomWidth << " sq. ft. " << endl ;
    return 0;
    
}