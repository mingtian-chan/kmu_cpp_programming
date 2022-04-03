#include <iostream>
using namespace std;

int x, y, mx, mn, a;

int main() {
    cin >> x;

    for(int i = 0; i < x; i++) {
        cin >> y >> a;

        mx = mn = a;

        for(int j = 1; j < y; j++) {
            cin >> a;
            
            mx = max(mx, a);
            mn = min(mn, a);
        }
        cout << mx << " " << mn << "\n";
    }
    return 0;
}
