#include <iostream>
using namespace std;

int arr[1000][1000];  // 미리 큰 베이스 배열을 만들고

int main() {
    int a, b, i, j, n, idx, cnt;
    

    int t;

    cin >> t;

    while(t--) {    // 배열을 채운다. 
        cin >> n >> a >> b;
            // for(int i = 0; i<=n;i++) // 미리 쓰레기 값을 0으로 초기화시킴
            //     for(int j =0;j<=n; j++) arr[i][j] = 0;

        for(int i = 1; i <= n; i++) // 1~ n^2 까지 채움
            for (int j = 1; j <= n; j++) 
                arr[i][j] = (i - 1) * n + j;
        cnt = 0;
        idx = 0;
        bool endflag = 0;
        i = 1, j = 1;
        while(!((i == n/2) && (j == n/2))) {

            //cout << i << " , " << j << "\n";

            for (j = 1 + idx; j <= n - idx; j++)  // 윗줄 진행시
                cout << i << " , " << j << "\n";

                cnt++;   
                if (cnt > a)
                    cout << (5*(i-1)+j) << " ";
                
                else if (cnt > b){
                    endflag = 1;
                    break;
                }
            if (endflag == 1)
                break;

            for (i = 1 + idx; i <= n - idx; i++)  //우측열 진행시
                cout << i << " , " << j << "\n";

                cnt++;
                if (cnt > a)
                    cout << (5*(i-1)+j) << " ";
                
                else if (cnt > b){
                    endflag = 1;
                    break;
                }
            if (endflag == 1)
                break;   

            for (j = n - idx; j >= 1 + idx; j--)  // 아랫줄 진행시
                cout << i << " , " << j << "\n";

                cnt++;
                if (cnt > a)
                    cout << (5*(i-1)+j) << " ";
                
                else if (cnt > b){
                    endflag = 1;
                    break;
                }
            if (endflag == 1)
                break;

            for (i = n - idx; i >= 1 + 2*idx; i--)  // 좌측열 진행시

                cout << i << " , " << j << "\n";

                cnt++;
                if (cnt > a)
                    cout << (5*(i-1)+j) << " ";
                
                else if (cnt > b){
                    endflag = 1;
                    break;
                }
            if (endflag == 1)
                break;

            idx++;  // 사각형이 점점 작아지는 것을 idx를 키워서 표현
        }



    }    
}