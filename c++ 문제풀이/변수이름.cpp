#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    getchar();

    for (int i = 0; i <T; i++){
        char name[257];
        int result = 1; 
        cin.getline(name, 257);

        if (name[0] >= 48 && name[0] <= 57) {  // 숫자면 거르는 과정
            cout << 0 << "\n";
            continue;
        }
		for (int i = 0; name[i] != '\0'; i++) {

			char c = name[i];

			if ((48 <= c && c <= 57) || (65 <= c && c <= 90) || (97 <= c && c <= 122) || c == '_')
				continue; // 숫자, 대문자, 소문자, '_' 면 패스
			else
			{ 
                result = 0;
				break; // 아니면 result를 0으로 바꿈
			}
        }
        cout << result << "\n";

    }
}