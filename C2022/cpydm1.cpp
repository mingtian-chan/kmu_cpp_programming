#include <iostream>
using namespace std;

class A{
    int p;
public:

    A(const A& obj){ // 복사 생성자
        p = obj.p;
        cout << this << " : A(const A&) called\n";
    }


    A(int v = 0) : p(v) { // 생성자
        cout << this << " : A(int) called \n";
    }
    ~A(){ // 소멸자
        cout << this << " ~A(int) called \n";
    }
    int getP(){
        return p;
    }
    void setP(int v){
        p = (v < 0) ? 0 : v;
    }
};


int main() {
    A a1(10), a2(a1);
    cout << a1.getP() << endl;
    cout << a2.getP() << endl;   
    return 0; 
}