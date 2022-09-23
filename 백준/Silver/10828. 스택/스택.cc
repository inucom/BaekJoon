#include <iostream>
#include <string>
using namespace std;
int stack[10000];
int main() {
	int n, num;
	cin >> n;
	string order;
	int top = -1;
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == "push") {
			cin >> num;
			top++;
			stack[top] = num;
		}
		else if (order == "pop") {
			if (top == -1) {
				cout << -1 << "\n";
			}
			else {
				cout << stack[top] << "\n";
				top--;
			}
		}
		else if (order == "top") {
			if (top == -1) {
				cout << -1 << "\n";
			}
			else
				cout << stack[top] << "\n";
		}
		else if (order == "size") {
			cout << top + 1<<"\n";
		}
		else if (order == "empty") {
			if (top == -1) {
				cout << 1 << "\n";
			}
			else  {
				cout << 0 << "\n";
			}
		}

	}
}