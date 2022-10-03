#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	string input;
	getline(cin, input);
	stack<char>que;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '<') {
			while (true) {
				cout << input[i];
				if (input[i] == '>') {
					break;
				}
				i++;
			}
			continue;
		}
		if (input[i] == ' ') {
			cout << ' ';
			continue;
		}
		que.push(input[i]);
		if (input[i + 1] == ' ' || input[i + 1] == '<'||input[i+1]==NULL) {
			while (que.empty() != 1) {
				cout << que.top();
				que.pop();
			}
			continue;
		}
		//cout << ' ';
	}
}

//' ' 전까지 스택에 넣고 ' ' 만나면 출력
//'<'만나면 '>'만날때 까지 출력