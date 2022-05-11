#include <iostream>
#include <string>
using namespace std;

string func(string number) {
	string quotient = "";
	while (number.size() > 1)
	{
		char tmp = number[number.size() - 1];
		number.pop_back();
		if (number[number.size() - 1] < tmp) {
			number[number.size() - 1] -= tmp - 58; // tmp가 큰 경우에는 tmp아스키에 10을 더 빼서 빼줌

			for (int i = number.size() - 2; i >= 0; i--) {
				if (number[i] != '0') {
					number[i]--;
					break;
				}
				number[i] += 9;
			}
			if (number[0] == '0')
				number = number.substr(1);
		}
		else
			number[number.size() - 1] -= tmp - 48; // 끝자리가 앞자리보다 작은 경우엔 tmp아스키를 뺌

		quotient = string(1, tmp) + quotient;
	}
	if (number != "0") return "0";
	return quotient;
}

int main() {
	int T;
	cin >> T;
	
	while (T--) {
		string number;
		cin >> number;
		string answer = func(number);
		cout << answer << '\n';
	}
}