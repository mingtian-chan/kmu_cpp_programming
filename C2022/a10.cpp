#include <iostream>
using namespace std;

int main(){
    char arr[10]; // 배열로 선언 : 자료형 배열이름 [배열크기]
    int i;

    for (i=0; i<10; i++){ // 첫번째 조건부터 시작, 두번째 조건이 참일 경우 loop body 진행하고 세번째 조건문 실행, i++; 는 i += 1;과 같음
      arr[i] = 'a'; // loop body
    }

    for (i=0; i<10; i++)
    cout << arr[i] << endl; // state가 하나뿐이면, {}안에 안넣어도 됨!

    return 0;
}
