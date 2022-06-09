#include <iostream>
using namespace std;

class Car{
    string color;
public:
    int speed;
    Car(int s=0, string c = "white") : speed(s), color(c){}
    void display(){
        cout << this << " ] " << speed << ", " << color << endl;
    }
};

int main() {
    Car carArray[4] = {
        Car(50),Car(100, "red"), Car(50, "blue"), Car(50, "")};
    for (int i = 0; i < 4; i++)
        carArray[i].display();
    
    return 0;
    
    }
