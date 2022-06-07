#include <iostream>
using namespace std;
int mode;// 전역 변수 mode

namespace Graphics {
int mode;
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
    mode = 1;
    Graphics::mode = 1;
    Network::mode = 2;

    Graphics::message();
    Network::message();


    return 0;
}