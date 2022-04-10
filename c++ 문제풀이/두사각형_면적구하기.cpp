#include <iostream>
using namespace std;

int main() {
    int T, apx, apy, aqx, aqy, bpx, bpy, bqx, bqy, tmpx, tmpy;
    int area, round;
    cin >> T;

    while (T--) {


        cin >> apx >> apy >> aqx >> aqy >> bpx >> bpy >> bqx >> bqy;
        // cout << apx << apy << aqx << aqy << bpx << bpy << bqx << bqy << endl;
        // cout << "minaqx"<< min(aqx,bqx) <<"maxqpx" << max(apx,bpx) << endl;

        tmpx = max((min(aqx,bqx) - max(apx,bpx)),0);
        // cout << tmpx << endl;
        tmpy = max((min(aqy,bqy) - max(apy,bpy)),0);
        // cout << tmpy << endl;
        if (tmpx ==0 || tmpy == 0)
            tmpx = 0;
            tmpy = 0;


        area = (aqx - apx) * (aqy - apy) + (bqx - bpx) * (bqy - bpy) - tmpx * tmpy;
        round =  2*((aqx - apx) + (aqy - apy) + (bqx - bpx) + (bqy - bpy)) - 2 * tmpx - 2 * tmpy;
        cout << area << " " << round << "\n";
        tmpx = 0;
        tmpy = 0;
    }
}