#include <iostream>
using namespace std;

int arr[1000][1000];
int main() {
    int a, b, i, j, n, x, y, cnt;

    int t;

    cin >> t;


    while(t--) {
        cin >> n >> a >> b;
        cnt = 0; //카운트와 x, y 초기화
        x = 1;
        y = 1;

        while (cnt <= b) {
            
            if (cnt > a)
                cout << (5*i+j) << " ";

            func(x, y ,n,cnt);
            
        }
        cout << "\n";

    }
}
int func(int i, int j, int n, int cnt) {
    cnt++;
    if (j >= i && i + j < n) 
        j++; // 함수아닌 버전의 윗줄의 처리에 해당
        

    else if (j > i && i + j >= n)
        i++; // 함수 아닌 버전의 오른쪽 열 처리에 해당

    else if (j < i && i + j >= n)
        j--; // 함수 아닌 버전 아랫줄 처리에 해당
    
    else if (j <= i && i + j < n)
        i--; // 함수 아닌 버전 왼쪽 열 처리에 해당
    
    return cnt;
    
}