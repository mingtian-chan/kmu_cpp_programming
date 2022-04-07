#include <iostream>

using namespace std;

int arr[100][100];

int main() {
    int k, n, x, y, i, j;

    int t;

    cin >> t;

    while(t--) {
        cin >> n; // n 칸 짜리 배열을 만듬 근데 array특성상 빈칸은 일단 모두 0이지.
        k = (n-1)/2;  // k,k 가 중앙이 되도록 일단 짜고 
        
        for(int i = 0; i<=n;i++)
            for(int j =0;j<=n; j++) arr[i][j] = 0;


        for(x = 0; k >= 2 * x - 1 ; x++){ // 1을 넣는 부분임

            for(y = 2 * x-1 ; y >= -(2 * x-1); y--) { // 0 을 1로 바꿔주는 작업을 할거임 여기선 (x는 여기서 확정이 이미 남)# 새악ㄱ해봐
                arr[k - (2 * x - 1)][k - y] = 1; // 윗칸
                arr[k + (2 * x - 1)][k - y] = 1; // 아래칸
                arr[k - y][k - (2 * x - 1)] = 1; // 왼졲칸
                arr[k - y][k + (2 * x - 1)] = 1; // 오른쪽 
            }    
        }

        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++) {
                cout << arr[i][j];
            }
            cout << "\n";
        }
        
    }

}