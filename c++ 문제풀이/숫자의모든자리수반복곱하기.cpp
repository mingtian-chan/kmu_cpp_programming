#include <iostream>
using namespace std;

int getAns(int num) {
    int ret;
    int ans = -1;

    do {
        cout << "num : " << num << "\n";
        ret = 1;
        while (num > 0) {
            if (num % 10 == 0){
                num /= 10;
                continue;
                }
            ret *= num % 10;
            num /= 10;

        cout << "ret : " << ret << "\n";
        }
        num = ret;

    ans = num;
    }
    while (ret > 9);

    return ans; // ans 가 -1이 나오면 뭔가 잘못 된 거임. 
}

int main(){
    int x, num;
    cin >> x;
    while(x--){
        cin >> num;
        cout << getAns(num) << "\n";
    }
}
