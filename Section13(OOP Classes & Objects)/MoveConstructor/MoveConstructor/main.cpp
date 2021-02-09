#include <iostream>
#include <vector>

using namespace std;

class Move {
private:
    int *data; 
public:
    int getData() { return *data ;}
    void setData(int d) { *data = d ; }
    //Constructor ProtoType
    Move(int d);
    //Copy Const ProtoType
    Move(const Move &source) ;
    //Move Const ProtoType
    Move(Move &&source) noexcept; 
    //Dest ProtoType
    ~Move();
};

Move::Move(int d) {
    data = new int ; 
    *data = d ;
    cout << "Constructor called for:" << *data << endl ; 
}

Move::Move(const Move &source)  //Copy Const == Note the const for Move Object. 
    :Move(*source.data) {
        cout << "Copy Constructor --(DEEP COPY)-- called for:" << *source.data << endl ; 
}

// Move Constuctor
Move::Move(Move &&source) noexcept 
//    :Move(*source.data) { //This is WRONG, I think!
    :data{source.data} {  //Steal the Content and Destroy source
        source.data=nullptr;
        cout << "Move Constcutor - Moving resource:" << *data << endl ; 
}

Move::~Move() {
    if (data!=nullptr)
        cout << "Desctructor freeing data for " << *data << endl ; 
    else
        cout << "Destructor freeing data for nullptr" << endl ; 
    delete data ; 
}

int main() {
    
    vector<Move> vec ; 
    vec.push_back(Move(10));
    vec.push_back(Move(20));
    vec.push_back(Move(30));
    vec.push_back(Move(40));
    vec.push_back(Move(50));
    vec.push_back(Move(60));
    vec.push_back(Move(70));
    vec.push_back(Move(80));
    
    
    
    return 0;
}