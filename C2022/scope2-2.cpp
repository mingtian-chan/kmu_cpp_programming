#include <iostream>
using namespace std;
int f1(int a, int b=1);
int garray[3];
int i;

void f2(void){
  extern int g1;
  cout << "f1(g1,20) = " << f1(g1, 20) << endl;

}
