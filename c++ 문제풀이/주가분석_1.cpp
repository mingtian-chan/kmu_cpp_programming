#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int t, tmp_old, tmp_mid, tmp_new, input, cnt;
        cnt = 0;
        cin >> t;
        cin >> input;
        tmp_old = tmp_mid = tmp_new = input;
        t--;
        while(t--){
            // cout << tmp_old << " " << tmp_mid << " " << tmp_new << "\n";
            cin >> input;
            if (input == tmp_mid)
                continue; // 같은 값을 넣으면 다음 input으로 넘어감
            if (tmp_mid == tmp_new){
                tmp_mid = tmp_new;
                tmp_new = input;
            }
            else {
                tmp_old = tmp_mid;
                tmp_mid = tmp_new;
                tmp_new = input;
            }
                
            if ((tmp_old < tmp_mid) && (tmp_new < tmp_mid))
                cnt++;
            // cout << tmp_old << " " << tmp_mid << " " << tmp_new << "\n";                
            // cout << "cnt : " << cnt << "\n";

        } 
        cout << cnt << "\n";

    }
}
