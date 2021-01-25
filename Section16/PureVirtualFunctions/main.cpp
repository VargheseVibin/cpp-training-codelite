#include <iostream>
#include <vector>

class Shape {   //Abstract Base Class --> Cannot be instantiated!
public:
    virtual void draw() = 0 ;       //Virtual Pure Function
    virtual void rotate() = 0 ;     //Virtual Pure Function
    
    virtual ~Shape() { }
};


class OpenShape:public Shape {               //Abstract Class
public:
    virtual ~OpenShape() { } 
};

class ClosedShape:public Shape  {             //Abstract Class
public:
    virtual ~ClosedShape() { } 
};

class Line : public OpenShape {         //Concrete Class
public:
    virtual void draw() override {
        std::cout << "Drawing a Line" << std::endl ; 
    }
    virtual void rotate() override {
        std::cout << "Rotating a Line" << std::endl ; 
    }
    virtual ~Line()  { } 
};

class Circle : public ClosedShape {     //Concrete Class
public:
    virtual void draw() override {
        std::cout << "Drawing a Circle" << std::endl ; 
    }
    virtual void rotate() override {
        std::cout << "Rotating a Circle" << std::endl ; 
    }
    virtual ~Circle() { } 
};

class Square : public ClosedShape {     //Concrete Class
public:
    virtual void draw() override {
        std::cout << "Drawing a Square" << std::endl ; 
    }
    virtual void rotate() override {
        std::cout << "Rotating a Square" << std::endl ; 
    }
    virtual ~Square() { }  
};


using namespace std;

int main() {
//    Shape s ;                               //error
//    Shape* sp = new Shape() ;               //error    
    
//    ClosedShape cs ;                        //error    
//    OpenShape os ;                          //error
//    ClosedShape* p_cp=new ClosedShape();    //error
//    OpenShape* p_op = new OpenShape();      //error
//    Circle c ; 
//    Square s ; 
//    c.draw();
//    c.rotate();
//    s.draw();
//    s.rotate();

    Shape* sp1=new Line();
    Shape* sp2=new Square();
    Shape* sp3=new Circle();
//    sp1->draw();
//    sp1->rotate();
//    sp2->draw();
//    sp2->rotate();

    

    std::vector<Shape*> shapes {sp1,sp2,sp3};
    for (const auto sp:shapes) 
        sp->draw();

    delete sp1;
    delete sp2 ; 
    delete sp3 ; 
            
    return 0;
}
