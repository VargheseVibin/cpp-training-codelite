#include <iostream>
#include <cstring>
#include <cctype>

using namespace std ;

int main () {
    char firstName[20] {};
    char fullName [40] {};
    char lastName[20] {};

    // cout << "Enter your first name:" ;
    // cin >> firstName ;
    // cout << "Enter your last name:";
    // cin >> lastName ;
    // cout << "Hello " << firstName << ", Your first name has " << strlen(firstName) << " characters and ";
    // cout << "your last name " << lastName << " has " << strlen(lastName) << " characters." << endl ; 

    // char fullName [40] {};
    // strcpy(fullName,firstName);
    // strcat(fullName," ");
    // strcat(fullName,lastName);

    // cout << "Hi! Your full name is " << fullName ;

    // cout << "Enter your full name :" ;
    // cin >> fullName ; 

    // cout << "Your full name is.." << fullName;


    // cout << "Enter your full name :" ;
    // cin.getline(fullName,50);

    // cout << "Your full name is.." << fullName << " and length of the name is " << strlen(fullName) << endl ;

    cout << "Enter your full name:" << endl ; 
    cin.getline(fullName,50) ;
    char tempStr [50] {} ;
    strcpy(tempStr,fullName);

    if (strcmp(tempStr,fullName) == 0)
        cout << tempStr << " and " << fullName << " are the same!" << endl ; 
    else 
        cout << tempStr << " and " << fullName << " are *NOT* the same!"  << endl;

    for (size_t i {0}; i <= strlen(fullName); ++i) {
        if (isalpha(fullName[i])) {
            if (islower(fullName[i]))
                fullName[i]=toupper(fullName[i]);
        }
    }
    cout << "Your full name now looks like:" << fullName << endl ;

    if (strcmp(tempStr,fullName) == 0)
        cout << tempStr << " and " << fullName << " are the same!" << endl ; 
    else 
        cout << tempStr << " and " << fullName << " are *NOT* the same!"  << endl;


}