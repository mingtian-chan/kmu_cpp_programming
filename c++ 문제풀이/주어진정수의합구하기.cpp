#include<iostream>
using namespace std;

int main() {
    int x, y, a, sum;
    cin >> x;

    while(x--) {
        cin >> y;
        sum = 0;

        while(y--) {
            cin >> a;
            sum += a;
        }
        cout << sum << "\n";
    }

    return 0;
}
