#include <iostream>
using namespace std;

isYun(int y){
    return (y % 400 ==0) || ((y %100 != 0) && (y % 4 == 0));
}


int main() {
    int T, y, m, d;
    int mlst[11] = {31,28,31,30,31,30,31,31,30,31,30};
    long sum = 0;
    cin >> T;
    while(T--){
        sum = 0;
        cin >> y >> m >> d;
        for (int i = 1582; i < y; i++){
            if (isYun(i)){
                sum += 366;
            }
            else
                sum += 365;
        }
        for (int i = 0; i < m-1; i++){
            sum += mlst[i];
            if ((i == 1)&& isYun(y)){
                sum++;
            }

        }
        sum += d + 4;

        cout << sum % 7 << endl;
    }
}