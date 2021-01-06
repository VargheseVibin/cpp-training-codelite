#include <iostream>
#include <string>

using namespace std;

int main () {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ';:!@#$%^&*()_+<>/,.?"} ;
    string cipher   {"0RNfVWXCJAD ';O:klmnowPxH&*(QZyza2^)_+<>/,.?bcdep6qrstuvEF345!9@Lj#$i%8UGhBKYT7gIMS1"} ;

    string inpStr {} ;
    cout << "Enter the string you want to encode:";
    getline(cin,inpStr);

    cout << "***************************************************" << endl;
    cout << "Encoding string ---" << inpStr << "---in Progress..." << endl ;
    cout << "***************************************************" << endl;
    string encodedStr {};
    for (char c:inpStr) {
        size_t charPos {};
        charPos=alphabet.find(c);
        if (charPos != string::npos)
            encodedStr+=cipher.at(charPos);
        else
            encodedStr+=c;
    }

    cout << "Encoed String..:" << encodedStr ;

    string decodedStr  {};
    for (char c:encodedStr) {
        size_t charPos {};
        charPos=cipher.find(c);
        if (charPos != string::npos) 
            decodedStr+=alphabet.at(charPos);
        else
            decodedStr+=c;
    }
    cout << endl ; 
    cout << endl ; 
    cout << "Decoded String back is:" << decodedStr << endl ;
    return 0;


}