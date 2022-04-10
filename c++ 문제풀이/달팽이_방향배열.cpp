#include <iostream>
using namespace std;

// edit with koa

int t, n, a, b;

int dy[] = { 0, 1, 0, -1 };
int dx[] = { 1, 0, -1, 0 };

int arr[1100][1100];

int main() {
    cin >> t;
    while(t--) {
        cin >> n >> a >> b;
        
        for(int i = 0; i <= 1010; i++) {
            for(int j = 0; j <= 1010; j++) {
                arr[i][j] = 0;
            }
        }

        int y = 1;
        int x = 1;
        int d = 0;

        for(int i = 1; i <= n * n; i++) {
            arr[y][x] = i;

            if(a <= i && i <= b) cout << (y - 1) * n + x << " ";

            int next_x = x + dx[d];
            int next_y = y + dy[d];

            if(next_x <= 0 || next_x > n || next_y <= 0 || next_y > n || arr[next_y][next_x] != 0) {
                d = (d + 1) % 4;
                next_x = x + dx[d];
                next_y = y + dy[d];
            }

            x = next_x;
            y = next_y;
        }

        cout << "\n";
    }
}