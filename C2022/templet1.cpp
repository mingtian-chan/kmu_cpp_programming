#include <iostream>
using namespace std;

template <class T>
void increase(T& v) { v += 1;}

int main() {
    int i = 1;
    cout << " i = " << i << endl;
    increase(i);
    cout << " i = " << i << endl;
    
    int *p = &i;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl; 
    increase(p);
    cout << "p = " << p << endl;



}