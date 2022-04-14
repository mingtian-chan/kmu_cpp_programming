#include <iostream>
using namespace std;

int main() {
    int T, apx, apy, aqx, aqy, bpx, bpy, bqx, bqy, tmpx, tmpy;
    int area, round;
    cin >> T;

    while (T--) {


        cin >> apx >> apy >> aqx >> aqy >> bpx >> bpy >> bqx >> bqy; // a사각형 p좌표 xy, q좌표 xy, b사각형 p좌표 xy, q좌표 xy
        // cout << apx << apy << aqx << aqy << bpx << bpy << bqx << bqy << endl;
        // cout << "minaqx"<< min(aqx,bqx) <<"maxqpx" << max(apx,bpx) << endl;

        tmpx = max((min(aqx,bqx) - max(apx,bpx)),0);
        // cout << tmpx << endl;
        tmpy = max((min(aqy,bqy) - max(apy,bpy)),0);
        // cout << tmpy << endl;
        if (tmpx ==0 || tmpy == 0){
            tmpx = 0;
            tmpy = 0;
            }  // 여기 중괄호 안 넣어서 틀림


        area = (aqx - apx) * (aqy - apy) + (bqx - bpx) * (bqy - bpy) - tmpx * tmpy;
        // cout << area << tmpx << tmpy << endl;
        round =  2*((aqx - apx) + (aqy - apy) + (bqx - bpx) + (bqy - bpy)) - 2 * tmpx - 2 * tmpy;
        cout << area << " " << round << "\n";
        tmpx = 0;
        tmpy = 0;
    }
}