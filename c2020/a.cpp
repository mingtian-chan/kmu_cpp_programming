#include <iostream>
using namespace std;

int main(){
    char var; // var이란 애를 미리 선언함

    var = 'a'; // 변수 variable

    //cout << 'a' << endl; // 상수 constant
    cout << var << endl;
    return 0;
}

// mkdir (디렉토리 이름)디렉토리 만듦
// cp (복사할 대상) (원하는 위치)  복사함
// cat : file 내용을 보여줌
// -g : 디버깅을 할 때 필요한 정보를 저장한다는 말


// 'a' 문자 : char type in C/C++
// "a" 문자열 : no such type in C
// 문자열 = 여러 개 문자들의 sequence
// 가능한 것 : "app", "apple", "" (null string), 'a', 'apple' <- 안됨


// 변수는 메인메모리에 저장된다.
// 어디에? : 메모리의 특정 주소에 들어감 기계어에서는 일련번호인 숫자주소를 사용
// "0x100번지에 'a'를 대입하라"


// var = 7 얘는 var이란 값에 7을 대입해라
// var == 7 얘가 var이 7과 같냐 라고 묻는거


// var = expression
// expression 값을 evaluation한 결과값을 var값을 저장한다.
// 수식 : a + b , var , 1 다 수식임
// LHS(Letf Hand Side)  RHS(Right Hand Side)
