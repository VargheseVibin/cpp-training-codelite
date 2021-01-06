#include <iostream>
#include <string>

using namespace std ;

void greeting (string name, string prefix="Mr.", string suffix="");



int main() {
    greeting ("Glen Walker", "Dr.", "M.D.");
    greeting ("Rob Vivoda");
    greeting ("Sanjay Menon", "Prof");
    return 0;
}

void greeting (string name, string prefix, string suffix) {
    cout << "Hello " << prefix << " " << name << " " << suffix << endl ; 
}