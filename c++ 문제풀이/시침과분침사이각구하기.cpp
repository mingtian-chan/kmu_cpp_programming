#include <iostream>
using namespace std;
int angleClock(int h, int m);
int main(void)
{
int t;
int h, m;
    cin >> t;
    for(int i=0; i<t; i++)
{
        cin >> h >> m;
        cout << angleClock( h, m ) << endl;
    }
    return 0;
}
int angleClock(int h, int m) {
  double ang = (30*(double)h -5.5*(double)m);
  if (ang <0){
    ang = -ang;
  }

  if (ang > 180){
    return (ang-180);
  }
  else  {
    return ang;
  }
}
