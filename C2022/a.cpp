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

// gdb 명령어
// l : 10줄 읽음
// r : run 실행시킴
// b 7 : break point at 7 7번라인에서 멈추도록 만듬
// 다시 run 하면 거기서 멈춤
// p : print , p var 하면 var의 내용이 나옴
// 즉, b 7 을 하면 7번라인을 수앵하지 않는다는 말
// n : 한 줄을 실행함
// p var 하면 97 'a'라고 출력됨 97은 메모리의 숫자
// p &var : 그 변수의 주소값을 프린트함
// c : continue 현재 멈춘 부분부터 프로그램을 수행함
// q : quit gdb를 끝냄

// 뱐수선언 : 자료형 변수이름;
// 변수선언의 예 : int 김영희 , char 'a' , 등등
// 식별자 알파벳, 숫자, 밑줄문자로 구성
// 첫 문자는 무족건 알파벳 또는 밑줄문자
// 대문자 소문자 구별함
// C언어의 키워드와 똑같으면 허용 안됨
