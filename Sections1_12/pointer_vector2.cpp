#include <iostream>
#include <vector>
#include <string>

using namespace std ;

void upperCasify(vector <string> *vec_str);

void upperCasify(vector <string> *vec_str) {
    for (size_t i{0};i<(*vec_str).size();++i)
        for (auto &c:(*vec_str).at(i))
            c=toupper(c);

}


int main () {
    vector <string> myNames {"vibin","febin","anuj","anub", "nathan", "nolan","varghese","rajamma"};
    cout << "Mey Vector Size" << myNames.size() << endl ; 
    cout << "My names are :" << endl ;
    for (auto name:myNames) 
        cout << name << " " ;
    upperCasify(&myNames);
    cout << "\nMy names NOW are :" << endl ;
    for (auto name:myNames) 
        cout << name << " " ;

    return 0;
}