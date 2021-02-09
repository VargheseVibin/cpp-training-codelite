#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> vector1 ;
    vector <int> vector2 ;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "Vector 1 Data" << endl ; 
    cout << "=========================" << endl ; 
    cout << "e#1..." << vector1.at(0) << endl;
    cout << "e#2..." << vector1.at(1) << endl;
    cout << "Vector1 size.." << vector1.size() << endl ;
    cout << "=========================" << endl ; 
    cout << "=========================" << endl ; 
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "Vector 2 Data" << endl ; 
    cout << "=========================" << endl ; 
    cout << "e#1..." << vector2.at(0) << endl;
    cout << "e#2..." << vector2.at(1) << endl;
    cout << "Vector1 size.." << vector2.size() << endl ;
    cout << "=========================" << endl ; 
    cout << "=========================" << endl ; 
    
    vector <vector <int>> vector2D ;
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);
    cout << "2D Vector Data" << endl ; 
    cout << "=========================" << endl ; 
    cout << vector2D.at(0).at(0) << endl ;
    cout << vector2D.at(0).at(1) << endl ;
    cout << vector2D.at(1).at(0) << endl ;
    cout << vector2D.at(1).at(1) << endl ;
    cout << "=========================" << endl ; 
    cout << "=========================" << endl ; 
    
    vector1.at(0)=1000;
    
        cout << "2D Vector Data(Again)" << endl ; 
    cout << "=========================" << endl ; 
    cout << vector2D.at(0).at(0) << endl ;
    cout << vector2D.at(0).at(1) << endl ;
    cout << vector2D.at(1).at(0) << endl ;
    cout << vector2D.at(1).at(1) << endl ;
    cout << "=========================" << endl ; 
    cout << "=========================" << endl ; 
    
    
    cout << "Vector 1 Data(Again)" << endl ; 
    cout << "=========================" << endl ; 
    cout << "e#1..." << vector1.at(0) << endl;
    cout << "e#2..." << vector1.at(1) << endl;
    cout << "Vector1 size.." << vector1.size() << endl ;
    cout << "=========================" << endl ; 
    cout << "=========================" << endl ; 
    
    return 0;
}