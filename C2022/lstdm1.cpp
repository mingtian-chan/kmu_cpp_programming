#include <iostream>
using namespace std;

class A{
    int p;
    const int c;
public:
    A(int v = 0, int c = 0) : p(v), c(c){
        cout << this << " : A(int, int) called \n";
    }
    ~A(){
        cout << this << " : ~A() called \n";
    }
    int getC(){
        return c;
    }
    int getP(){
        return p;
    }
    void setP(int v) {
        p = (v < 0) ? 0 : v; // 삼항연산자, true 면 앞거, false면 뒷거
    }
};
A a2 (2,3);
int main() {
    A a1(10);
    A a3(10);
    cout << a1.getP() << endl;
    cout << a1.getC() << endl;
    cout << a2.getP() << endl;
    cout << a2.getC() << endl;
}