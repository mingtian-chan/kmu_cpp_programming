#include <iostream>
using namespace std;

int main() {
    int a, x, y;
 
    cin >> x;

    while(x--) {
        cin >> y;
        int ans = 1;

        while(y--) {
            cin >> a;
            a %= 10;
            ans = (ans * a) % 10;
        }
        cout << ans << "\n";
    }       
    return 0;
}
