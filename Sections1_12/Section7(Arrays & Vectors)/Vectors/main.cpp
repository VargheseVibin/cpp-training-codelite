#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <char> vowels { 'a', 'e', 'i', 'o', 'u'};
    cout << "First vowel is ...." << vowels.at(0) << endl; 
    cout << "Last  vowel is ...." << vowels.at(4) << endl; 
    
    vector <int> testScores {100,98,67};
    //vector <int> testScores (6,98) ; 
    
    
    cout << "Test Scores in Array Syntax" << endl; 
    cout << testScores[0] << endl ;
    cout << testScores[1] << endl ;
    cout << testScores[2] << endl ;
    
    cout << "Test Score in Vector Syntax" << endl ; 
    cout << testScores.at(0) << endl ; 
    cout << testScores.at(1) << endl ; 
    cout << testScores.at(2) << endl ; 
    
    cout << "There are a total of " << testScores.size() << "members in the vector" << endl ; 
    
    cout << "Override the Test Score from terminal" << endl ; 
    cin >> testScores.at(0);
    cin >> testScores.at(1);
    cin >> testScores.at(2);
    
    cout << "Test Score in Vector Syntax" << endl ; 
    cout << testScores.at(0) << endl ; 
    cout << testScores.at(1) << endl ; 
    cout << testScores.at(2) << endl ; 
    
    cout << "Enter one more test score" ;
    int newTestScore {0} ; 
    cin >> newTestScore ; 
    testScores.push_back(newTestScore);
    
    cout << "Enter one more test score" ;
    cin >> newTestScore ; 
    testScores.push_back(newTestScore);
    
    cout << "Test Scores after addning one more test result" << endl ; 
    cout << testScores.at(0) << endl ; 
    cout << testScores.at(1) << endl ; 
    cout << testScores.at(2) << endl ; 
    cout << testScores.at(3) << endl ; 
    cout << testScores.at(4) << endl ; 
    //cout << testScores.at(5) << endl ; 
    //cout << testScores.at(6) << endl ; 
    
    vector <vector <int>> movieRatings ; 
    movieRatings = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {0,1,2}
    } ; 
    
    cout << "\nMovie Rating of Reviewer#1...:" << endl ; 
    cout << movieRatings.at(0).at(0) << '\t' ;
    cout << movieRatings.at(0).at(1) << '\t' ;
    cout << movieRatings.at(0).at(2) << '\t' ;
    
    cout << "\nMovie Rating of Reviewer#2...:" << endl ; 
    cout << movieRatings.at(1).at(0) << '\t' ;
    cout << movieRatings.at(1).at(1) << '\t' ;
    cout << movieRatings.at(1).at(2) << '\t' ;
    
    cout << "\nMovie Rating of Reviewer#3...:" << endl ; 
    cout << movieRatings.at(2).at(0) << '\t' ;
    cout << movieRatings.at(2).at(1) << '\t' ;
    cout << movieRatings.at(2).at(2) << '\t' ;
    
    cout << "\nMovie Rating of Reviewer#4...:" << endl ; 
    cout << movieRatings.at(3).at(0) << '\t' ;
    cout << movieRatings.at(3).at(1) << '\t' ;
    cout << movieRatings.at(3).at(2) << '\t\n' ;
    
    return 0;
}

