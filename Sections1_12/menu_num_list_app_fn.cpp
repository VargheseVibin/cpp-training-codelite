#include <iostream>
#include <vector>

using namespace std;

char displayMenu();
void addNumberToList(vector <int> &myNumbers);
void printNumbersInList(const vector <int> &myNubmers);
double deriveMeanOfNumbers(const vector<int> &myNumbers);
int getSmallestNumberInList(const vector <int> &myNumbers);
int getLargestNumberInList(const vector <int> &myNumbers);
void clearListOfNumbers(vector <int> &myNumbers);
void exitApplication();

int main() {
    vector <int> myNumbers {};
    char sel{};
    
    do {
        sel={displayMenu()};

        switch (sel)
        {
        case 'A':
        case 'a':
            addNumberToList(myNumbers);
            break;
        case 'P':
        case 'p':
            printNumbersInList(myNumbers);
            break;
        case 'm':
        case 'M':
            cout << "MEAN(M) of Numbers in the List is:" << deriveMeanOfNumbers(myNumbers) << endl ; 
            break;
        case 'q':
        case 'Q':
            exitApplication();
            break;
        case 's':
        case 'S':
            cout << "Smallest(S) of Numbers in the List is:" << getSmallestNumberInList(myNumbers) << endl ; 
            break;
        case 'l':
        case 'L':
            cout << "Largest(L) of Numbers in the List is:" << getLargestNumberInList(myNumbers) << endl ; 
            break;
        case 'c':
        case 'C':
            clearListOfNumbers(myNumbers);
            cout << "List of Numbers cleared" << endl ; 
            break;
        default:
            break;
        }
    }while(sel!='q'&&sel!='Q');



    return 0;
}

char displayMenu() {
    char sel {};
    cout << "Welcome to the My Simple application (updated with Functions)" << endl ;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl ;
    cout << endl ;
    cout << "(P) - Print numbers"  << endl ;
    cout << "(A) - Add a Number"  << endl ;
    cout << "(M) - Display the Mean of Numbers"  << endl ;
    cout << "(S) - Display smallest number"  << endl ;
    cout << "(L) - Display Largest Number"  << endl ;
    cout << "(C) - Clear the List of Numbers"  << endl ;
    cout << "(Q) - Quit"  << endl ;
    cout << endl ; 
    cout << "Enter your selection:" ; 
    cin >> sel ; 
    return sel;
}

void addNumberToList(vector <int> &myNumbers) {
        int num {};
        cout << "Enter a number to the list:";
        cin >> num ;
        myNumbers.push_back(num);
        cout << "Added " << num << " to the list" << endl ; 
}

void printNumbersInList(const vector<int> &myNumbers) {
    if(myNumbers.size()<1) {
        cout << "Sorry! There are no numbers in the list as yet!" << endl ;
    }
    else {
        cout << "The Numbers in the LIST are these :" << endl ;
        cout << "[ " ;
        for(auto num: myNumbers) 
            cout << num << " ";
        cout << "]" << endl ;
    }
}

void exitApplication() {
    cout << "Thanks for using the App. Have a good day!" << endl ; 
}

double deriveMeanOfNumbers(const vector<int> &myNumbers) {
    double tot_sum {};
    if(myNumbers.size()<1) {
        cout << "Sorry! There are no numbers in the list as yet!" << endl ;
    }
    else {
            for (auto val:myNumbers) {
            tot_sum+=val;
        }
    }
    return tot_sum/myNumbers.size();

}

int getSmallestNumberInList(const vector <int> &myNumbers) {
    int min_num{};
    if(myNumbers.size()<1) {
        cout << "Sorry, Your list has no numbers. ADD(A) some numbers and try!" << endl ; 
    }
    else {
        for (size_t i{0}; i<myNumbers.size();++i) {
            if ((myNumbers[i]<min_num)||i==0)
                min_num=myNumbers[i];
        }
    }
    return min_num;
}
int getLargestNumberInList(const vector <int> &myNumbers) {
    int max_num{};
    if(myNumbers.size()<1) {
        cout << "Sorry, Your list has no numbers. ADD(A) some numbers and try!" << endl ; 
    }
    else {
        for (size_t i{0}; i<myNumbers.size();++i) {
            if ((myNumbers[i]>max_num)||i==0)
                max_num=myNumbers[i];
        }
    }
    return max_num;
}

void clearListOfNumbers(vector <int> &myNumbers) {
    myNumbers.clear();
}