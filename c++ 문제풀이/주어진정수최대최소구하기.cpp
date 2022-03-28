#include<iostream>
using namespace std;int main(int argc, char const *argv[]) {
    int i, j, x, y, max, min, a;
    cin >> x;
    for(i=0;i<x;i++) {
      cin >> y;

      cin >> a;
      max =min = a;

      for(j=1;j<y;j++) {
        cin >> a;
        if(a > max){
          max = a;
        }
        if(a < min){
          min = a;
        }

      }
      cout << max <<" " << min << endl;
    }
  return 0;
}
