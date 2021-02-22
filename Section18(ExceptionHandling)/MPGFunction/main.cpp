//Section 18
//Miles per Gallon - No Exception HAndling 
#include <iostream>

using namespace std;

double calc_mpg(int m, int g) {
    if (g==0) 
        throw 0 ; 
    return static_cast<double>(m)/g ; 
}

int main() {
    int miles {} ; 
    int gallons {} ; 
    double miles_per_gallon {};
//    std::cin.get();
    std::cout << "Enter the Miles:" ; 
    std::cin >> miles;
    std::cout << "Enter the Gallons:" ; 
    std::cin >> gallons;

    try {
            miles_per_gallon=calc_mpg(miles,gallons);
            std::cout << "Your Miles Per Gallons is:" << miles_per_gallon << std::endl ; 
    }
    catch (int &ex) {
        std::cerr << "Tried dividing by ZERO!!" << std::endl ; 
    }


    std::cout << "Bye!" << std::endl ; 

    return 0;
}
