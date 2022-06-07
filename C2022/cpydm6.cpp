#include <iostream>
using namespace std;

class Point{
    int x, y;

public:
    Point(int x=0, int y = 0) :x(x){ // x 앞에게 멤버변수, 뒤에게 배개변수 
        this -> y = y; // y도 앞에게 멤버변수, 뒤에게 매개변수
    }
    void print(){
        cout << "( " << x << ", " << y << " )";
    }
};

class Circle{
    Point center;
    int radius;
public:
    Circle(int r):center(0,0), radius(r){} // c2,
    Circle(Point p = Point(0,0), int r=0):center(p), radius(r){} // 기본 생성자, c1, c5
    Circle(int x, int y, int r= 0): center(x,y), radius(r){} // c3, c4
    void print(){
        center.print();
        cout << " : " << radius << endl;
    }
};


int main() {
  Point p(3,4);
  Circle c1; c1.print();
  Circle c2(2); c2.print();  
  Circle c3(-1, -2); c3.print();  
  Circle c4(4,5,1); c4.print();  
  Circle c5(p,5); c5.print();  
}