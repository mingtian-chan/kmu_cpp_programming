#include <iostream>
using namespace std;

int angleClock(double h, double m);

int main(void) {
    int t;
    double h, m;

    cin >> t;

    while(t--) {
        cin >> h >> m;
        cout << angleClock(h, m) << "\n";
    }
    return 0;
}

int angleClock(double h, double m) {
    double ang = abs(30 * h - 5.5 * m);

    return ang > 180 ? 360 - ang : ang;
}
