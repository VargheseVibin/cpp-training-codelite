//Section 18
//Miles per Gallon - No Exception HAndling 
#include <iostream>

using namespace std;

int main() {
    int miles {} ; 
    int gallons {} ; 
    double miles_per_gallon {};
//    std::cin.get();
    std::cout << "Enter the Miles:" ; 
    std::cin >> miles;
    std::cout << "Enter the Gallons:" ; 
    std::cin >> gallons;

//    miles_per_gallon= miles/gallons ; 
    if (gallons!=0) {
            miles_per_gallon= static_cast<double>(miles)/gallons ; 
    }
    else
        std::cerr << "Sorry! Cannot divide by 0!" << std::endl ; 

    std::cout << "Your Miles per Gallon:" << miles_per_gallon << std::endl ; 

    std::cout << "Bye! "; 


    return 0;
}
