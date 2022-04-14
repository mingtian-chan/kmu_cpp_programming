#include <iostream>
using namespace std;

int main(){
    int T, ax, ay, bx, by;
    cin >> T;
    while(T--){
        cin >> ax >> ay >> bx >> by;

        if (bx > ay | ax > by){ // 서로 겹치지 않는 경우
            cout << 0 << " " << ay - ax + by - bx << "\n";
        } // 하나가 하나에 포함되는경우
        else if ((bx < ax && ay < by)|(ax < bx && by < ay)){
            cout << min(ay-ax,by-bx) << " " << by - bx + ay - ax - min(ay-ax,by-bx) << "\n";
        }
        else { // 포함되지 않고 겹치는 경우
            cout << min(ay-bx,by-ax) << " " << by - bx + ay - ax - min(ay-bx,by-ax) << "\n";
        }
    }

}