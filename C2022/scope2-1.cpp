#include <iostream>
using namespace std;
void f2(void); //전역변수
int f1(int a, int b=1); // 전역 a, b
int g1 = 3; // 전역 g1
extern int garray[3]; // 전역 garray[3]

int main(){
  extern int i ; // 지역 i

  for (int j=0; j<2; j++){ // 지역 j
    static int i = 1; // 지역 i
    i++;
    cout << "inside loop, i = "<< i << endl;
  }
  cout << "outside loop, i = "<< i << endl;

  cout << "f1(i) = " << f1(i) << endl;
  cout << "f1(i) = " << f1(1000 , 50) << endl;

  f2();
  return 0; // 지역 j, i
}

int f1(int a, int b){ // 지역 a b
  static int c = 100; // 전역 c
  c = a+b+c+g1;
  return c; // 지역 ab
} 
