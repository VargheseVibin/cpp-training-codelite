#include <iostream>

int main() {
    // Nice comment Test
    int my_number; 
    std::cout << "Enter a number between 1 and 100.. :" ;
    std::cin >> my_number ;
    std::cout << "Amazing, that's my favorite number" << std::endl;
    std::cout << "No seriously.. " << std::to_string(my_number) << " is my favorite number!" << std::endl;
    std::cout << "No seriously.. " << my_number << " is my favorite number!" << std::endl;
}