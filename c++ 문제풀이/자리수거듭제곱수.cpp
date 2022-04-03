#include <iostream>
#include <cmath>
using namespace std;

int getDigit(int num) {
    int ret = 0;

    while(num > 0) {
        num /=10;
        ret++;
    }

    return ret;
}

int main() {
    int j, k, n, x, sum, num;    

    cin >> x;

    while(x--) {
        cin >> num;

        n = num;
        k = sum = 0;

        k = getDigit(num);

        for (j = 0; j < k; j++) {
            sum += pow(n % 10, k);
            n /= 10;
        }

        cout << (num == sum ? 1 : 0) << "\n";
    }   
    return 0;
}

