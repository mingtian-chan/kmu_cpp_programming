#include <iostream>
using namespace std;

int arr[1000][1000];
int a, b, n, x, y, cnt, t;


void func(int n) {
    if(y <= x && x + y < n) x++;
    else if(y < x && x + y >= n) y++;
    else if(y >=x && x+ y > n) x--;
    else if(y > x && x + y <= n) y--;

    // if (y >= x && x + y < n) 
    //     y++; // 함수아닌 버전의 윗줄의 처리에 해당
        

    // else if (y > x && x + y >= n)
    //     x++; // 함수 아닌 버전의 오른쪽 열 처리에 해당

    // else if (y < x && x + y >= n)
    //     y--; // 함수 아닌 버전 아랫줄 처리에 해당
    
    // else if (y <= x && x + y < n)
        // x--; // 함수 아닌 버전 왼쪽 열 처리에 해당    
}

int main() {
    cin >> t;


    while(t--) {
        cin >> n >> a >> b;

        cnt = 0; //카운트와 x, y 초기화
        x = 1;
        y = 1;

        while (cnt <= b) {
            
            if (cnt > a)
                cout << (5*x+y) << " ";
        
            func(n);
            cout << y <<" " << x << "\n";
            cnt++;

        }
        cout << "\n";

    }
}
