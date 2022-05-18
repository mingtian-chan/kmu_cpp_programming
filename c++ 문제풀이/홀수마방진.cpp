#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--){
        int s;
        cin >> s;
        arr[s][s]; // 한 변이 s인 arr
        
        for (int i = 0; i < s; i++){ // arr을 0으로 초기화
            for (int j = 0; j < s; j++){
                arr[i][j] = 0;
            }
        }

        arr[0][(s-1)/2] = 1;

        for (int i = 1; i <= s * s; i++){
            
        }
        
    }
}