#include <iostream>
using namespace std;

int main() {
    const int one = 1;

    const int *i1 = &one; // i1은 const 선언된 int 포인터에 + 상수의 주소를 줌
    const int &i2 = one; // i2는 const 선언된 int reference + 상수의 이름을 줌
    
    // int *i3 = &one; // i3은 const 선언이 안 된 int 포인터 (변수 int 포인터) + 상수의 주소를 줌 // 이건 compile error
    // int &i4 = one; // i4는 const 선언이 안 된 int reference (변수 int 레퍼런스) + 상수의 이름을 줌 // 이건 compile error


    int two = 2;

    const int *k1 = &two; // k1 은 const 선언된 int 포인터 + 변수의 주소를 줌
    const int &k2 = two; // k2 는 const 선언된 int reference + 변수의 이름을 줌

    int *k3 = &two; // k3 은 const 선언 안된 int 포인터 (변수 int 포인터 ) + 변수의 주소를 줌
    // int *k4 = two; // int 포인터에 int를 넣을 수 없음 /// compile error

    // int &k5 = &two; // int에 int 포인터를 넣을 수 없음 /// compile error
    int &k6 = two; // k4는 const 선언 안된 int reference (변수 int reference) + 변수의 이름를 줌
    
    cout << "k1 : " << k1 << endl;
    cout << "k2 : " << k2 << endl;
    
    cout << "k3 : " << k3 << endl;
    // cout << "k4 : " << k4 << endl;    
    
    // cout << "k5 : " << k5 << endl;
    cout << "k6 : " << k6 << endl;

}