/* 
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
====================================
Total estimate: $63.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room
    
    Display cost:  (number of rooms * price per room)
    Display tax:   number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main() {
    
    cout << "Frank's Carpet Cleaning Service" << endl ;
    cout << "\n How many rooms would you like cleaned? " ;
    int noOfRoomsToClean {0};
    cin >> noOfRoomsToClean;    
    
    
    
    const double roomCleaningCharge {30.0};
    const float taxRate=6.0;
    cout << "Cost to Room Cleaning " << noOfRoomsToClean*roomCleaningCharge  << endl ;
    cout << "Total Tax for Room Cleaning......$" << (noOfRoomsToClean*roomCleaningCharge*taxRate)/100  << endl ; 
    cout << "**************************************" << endl ; 
    cout << "Total Room Cleaninig Expenses....$" << (noOfRoomsToClean*roomCleaningCharge)+((noOfRoomsToClean*roomCleaningCharge*taxRate)/100) << endl;
    
    return 0 ; 
    
}