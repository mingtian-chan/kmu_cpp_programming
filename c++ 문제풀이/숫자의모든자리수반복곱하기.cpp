#include <iostream>
using namespace std;

long long getAns(long long num) {
    long long ret;

    do {
        ret = 1;
        while (num > 0) {
            if (num % 10 == 0){
                num /= 10;
                continue;
                }
            ret *= num % 10;
            num /= 10;
        }
        num = ret;

    } while (ret > 9);

    return num;
}

int main(){
    long long x, num;
    cin >> x;
    while(x--){
        cin >> num;
        cout << getAns(num) << "\n";
    }
}
