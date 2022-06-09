#include <iostream>
using namespace std;

class Car{
    int speed;
    string color = "red";
public:
    Car(int s=0, string c ="white"):speed(s), color(c){}
    
void display(){
    cout << this << " ] " << speed << ", " << color << endl;
}
};
void swapObjects(Car c1, Car c2){
    Car tmp;
    tmp = c1;
    c1 = c2;
    c2 = tmp;
}

int main() {
    Car redCar(100, "red"), blueCar(50, "blue");
    redCar.display(); blueCar.display();
    swapObjects(redCar, blueCar);
    redCar.display(); blueCar.display();
    return 0; 
}

// 이렇게 하면 swapObjects 안의 red blue는 바뀌지만, 
// main 안의 swapObjects는 안 바뀜. ( value로 복사해 온 경우 )