#include <iostream>
#include <vector>

using namespace std;

int main () { 
    char sel {} ; 
    vector <int> myVector;
    do {
            cout << "Welcome to the simple application " << endl ;
            cout << endl ;
            cout << "(P) - Print numbers"  << endl ;
            cout << "(A) - Add a Number"  << endl ;
            cout << "(M) - Display the Mean of Numbers"  << endl ;
            cout << "(S) - Display smallest number"  << endl ;
            cout << "(L) - Display Largest Number"  << endl ;
            cout << "(Q) - Quit"  << endl ;
            cout << endl ; 
            cout << "Enter your selection:" ; 
            cin >> sel ; 
            
            

            switch (sel)
            {
                case 'A':
                case 'a':
                {
                    int num {};
                    cout << "Enter a number to the list:";
                    cin >> num ;
                    myVector.push_back(num);
                    cout << "Added " << num << " to the list" << endl ; 
                    break;
                }
                case 'P':
                case 'p':
                {
                    if (myVector.size()<1) {
                        cout << "Sorry, No numbers in the list " << endl ;
                        break;
                    }
                    cout << "Numbers in the list are:" << endl;
                    cout << "[ ";
                    for (auto val:myVector) 
                        cout << val << ' ' ;
                    cout << "]" << endl << endl;
                    break;
                }
                case 'M':
                case 'm':
                {
                    if (myVector.size()<1) {
                        cout << "Sorry, No numbers in the list " << endl ;
                        break;
                    }
                    double temp_sum {0};
                    double mean {0};
                    if (myVector.size() > 0) {
                        for(auto val:myVector)
                            temp_sum+=val;
                        mean=(temp_sum/myVector.size());
                    }
                    else 
                        mean =0;
                    cout << "Mean of the numbers in the list:" << mean << endl << endl;
                    break;
                }
                case 'S':
                case 's':
                {
                    if (myVector.size()<1) {
                        cout << "Sorry, No numbers in the list " << endl ;
                        break;
                    }
                    int i {0};
                    int smallest_num {myVector.at(0)};
                    for (auto num1:myVector) {
                        if (i>0) {
                            if (num1 < smallest_num) 
                                smallest_num=num1;
                        }
                        ++i;
                    }
                    cout << "Smallest number in the list is:" << smallest_num << endl << endl;
                    break;
                }
                case 'L':
                case 'l':
                {
                    if (myVector.size()<1) {
                        cout << "Sorry, No numbers in the list " << endl ;
                        break;
                    }                    
                    int i {0};
                    int largest_num {myVector.at(0)};
                    for (auto num:myVector) {
                        if (i>0) {
                            if (num > largest_num) 
                                largest_num=num;
                        }
                        ++i;
                    }
                    cout << "Largest number in the list is:" << largest_num << endl << endl;
                    break;
                }
                case 'Q':
                case 'q':
                    cout << "Thanks for using the app. Have a good Day!";
                    break;
                default:
                    cout << "Enter a valid option for the above list" ;
                    break;
            }
    }while (sel!='q' && sel!='Q');



    return 0;
}