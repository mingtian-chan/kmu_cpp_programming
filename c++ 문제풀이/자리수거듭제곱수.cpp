#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]) {
    int i, j, k, n, x, sum, num, tmp;    
    cin >> x;
    for (i=0; i<x; i++){
        cin >> num;
        tmp = num;
        n = num;
        k = 0;
        sum = 0;
        while (tmp >0){
            tmp = (tmp/10);
            k += 1;
        }
        for (j=0; j<k;j++) {
            sum += pow(n%10,k);
            n = n /10;
        }
        if (num == sum){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }   
    return 0;
}

