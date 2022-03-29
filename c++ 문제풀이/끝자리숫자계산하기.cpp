#include <iostream>
using namespace std;

int main() {
    int a, i, j, x, y;
 
    cin >> x;
    for (i=0; i<x; i++) {
        cin >> y;
        int times = 1;

        for(j=0; j<y; j++) {
            cin >> a;
            a %= 10;
            times *= a;
            times %= 10;
        }
        cout << times << endl;
    }       
    return 0;
}
