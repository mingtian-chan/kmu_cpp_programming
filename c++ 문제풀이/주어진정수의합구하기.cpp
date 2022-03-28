#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int i, j, x, y, a, sum;
    cin >> x;
    for(j =0; j < x; j++){
    cin >> y;
    sum = 0;
        for(i =0; i < y; i++){
            cin >> a;
            sum += a;
            }
        cout << sum << endl;
        }

    return 0;
}
