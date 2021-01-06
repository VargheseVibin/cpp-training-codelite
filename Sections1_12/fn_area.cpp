#include <iostream>

using namespace std ;

double calcAreaCircle (double radius) ;
double calcVolumeCylinder(double radius, double height);
void areaCircle();
void volumeCylinder();

const double  PI {3.14159};



int main () {

    areaCircle();
    volumeCylinder();

    return 0 ;

}

double calcAreaCircle (double radius) {
    double area {PI*radius*radius};
    return area ;
}

double calcVolumeCylinder(double radius, double height) {
    double volume {calcAreaCircle(radius)*height};
    return volume;
}

void areaCircle() {
    double radius {};
    cout << "Enter the radius of the circle in (cm):" ;
    cin >> radius ;

    cout << "The Area of the circle is :" << calcAreaCircle(radius) << " sq. cms" << endl ;
}


void volumeCylinder() {
    double radius{};
    double height{};
    cout << "Enter the radius of the cylinder in (cm):" ;
    cin >> radius ;
    cout << "Enter the radius of the height in (cm):" ;
    cin >> height ;
    cout << "The volume of the cylinder is:" << calcVolumeCylinder(radius,height) << " cu.cms" << endl ; 
}
