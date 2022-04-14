#include <iostream>
using namespace std;

char arr[100][100];

int main() {
    int T, n;

    cin >> T;

    while(T--){
        cin >> n;
        for (int j = 1; j < n+1; j++){ // 전체 배열을 .으로 초기화
            for (int i = 1; i < n+1; i++ ){
                arr[i][j] = '.';
                if (i == 1 || i == (n+1)/2 || i == n)
                    arr[i][j] = '|';
                if (j == 1 || j == (n+1)/2 || j == n)
                    arr[i][j] = '-';
                if (i == j)
                    arr[i][j] = '\\';
                if (i == n-j+1)
                    arr[i][j] = '/';
                if ((i == 1 || i == (n+1)/2 || i == n) && (j == 1 || j == (n+1)/2 || j == n))
                    arr[i][j] = '+';
                if (i == (n+1)/2 && j == (n+1)/2)
                    arr[i][j] = '*';
            }
        }

        for (int j = 1; j < n+1; j++){ // 전체 배열을 .으로 초기화
            for (int i = 1; i < n+1; i++){
                cout << arr[i][j];
                if (i == n)
                    cout << "\n";
            }

        }

        
    }
}
