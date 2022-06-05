#include <iostream>
using namespace std;

int main() {
    int iarr[20], *ip = iarr;
    char carr[20] = "charachers", *cp = carr;
    double darr[20], *dp = darr;

    cout << "ip : " << ip << endl;
    cout << "ip +1 : " << ip +1 << endl; // int 는 4씩 증가 
    cout << "cp : " << cp << endl; // 캐릭터포인터는 문자열을 출력함
    cout << "cp +1 : " << cp + 1 << endl; 
    cout << "(void *)cp : " << (void *)cp << endl;
    cout << "(void *)(cp +1) : " << (void *)(cp +1) << endl; // char 이면 1씪
    cout << "dp : " << dp << endl;
    cout << "dp  + 1: " << dp +1 << endl; // double 이면 8씩 증가
}