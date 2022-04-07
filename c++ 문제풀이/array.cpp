#include <iostream>
using namespace std;

int main() {
    int  n, i, j;
    cin >> n;
    int array1[n][n] = {};

        for (i = 0; i < n; i++){
        for (j = 0; j < n; j++) {
            cout << array1[i][j] << " ";
        }
            cout << "\n";
        }
}