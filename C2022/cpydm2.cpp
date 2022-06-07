#include <iostream>
using namespace std;

class A{
    int p;
public:

    A(const A& obj){ // 복사 생성자
        p = obj.p;
        cout << this << " : A(const A&)" << &obj << "\n";
    }


    A(int v = 0) : p(v) { // 생성자
        cout << this << " : A(int) " << v <<"\n";
    }
    ~A(){ // 소멸자
        cout << this << " ~A(int) \n";
    }
    int getP(){
        return p;
    }
    void setP(int v){
        p = (v < 0) ? 0 : v;
    }
    A return_this(){
        return *this;
    }
};

A plusOne(A c) {
    A result(c.getP() + 1);
    return result;
}

int main() {
    A a1(10), a2(a1);
    cout << a1.getP() << endl;
    cout << a2.getP() << endl;   
    a2 = plusOne(a1).return_this();
    cout << a2.getP() << endl;
    return 0; 
}