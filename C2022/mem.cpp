#include <iostream>
using namespace std;

int main() {
    int *p;
    p = new int;

    *p = 100;
    cout << "*p =" << p << endl;
    delete p;

    int *q = new int;
    *q = 100;

    cout << "*q =" << q << endl;

    delete q; // 같은 주소 뱉어냄 
    return 0;

}