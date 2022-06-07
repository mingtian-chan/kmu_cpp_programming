#include <iostream>
using namespace std;

int mode;// 전역 변수 mode

namespace Graphics {
int mode = 5;
int x, y;
void draw() { cout << "Graphics draw()" << endl; };
void message() { cout << "Graphics message()" << endl; };
}

namespace Network {
    int mode, speed;
    void send(char*){ cout << "Network send()" << endl;};
    void message() { cout << "Network message()" << endl;};
}

int main(){
    using Graphics::mode;

    Graphics::mode = 2;
    ::mode = 1;
    Network::mode = 3;

    Graphics::message();
    Network::message();


    cout << ::mode << endl;
    cout << Network::mode << endl;

    return 0;
}