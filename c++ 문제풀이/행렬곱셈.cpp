#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--){
        int a, b, c;
        cin >> a >> b >> c;
        int arr1 [a][b];
        int arr2 [b][c];
        int arr3 [a][c];
        int sum = 0;

        int input;
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                // cout << i << j << "\n";
                cin >> input;
                arr1[i][j] = input;
                // cout << arr1[i][j] << "\n";
            }
        }
        for (int i = 0; i < b; i++){
            for (int j = 0; j < c; j++){
                
                cin >> input;
                arr2[i][j] = input;
            }
        }        
        for (int i = 0; i < a; i++){
            for (int k = 0; k < c; k++){
                for (int j = 0; j < b; j++) {
                    sum += int(arr1[i][j]) * int(arr2[j][k]);
                }
                arr3[i][k] = sum;
                sum = 0;
            }
        }
        for (int i = 0; i < a; i++){
            for (int k = 0; k < c; k++){
                cout << arr3[i][k] << " ";
            }
            cout << "\n";
        }
    }
}