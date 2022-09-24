#include <iostream>
#include <stack>
using namespace std;
stack<int> sta;
char oper[200000];
int main() {
	int n, num;
	cin >> n;
	int save = 1;
	int i = 0;
	for (int k = 0; k < n; k++) {
		cin >> num;
		if (num >= save) {
			for (save; save <= num; save++) {
				sta.push(save);
				oper[i] = '+';
				i++;
			}
			sta.pop();
			oper[i] = '-';
			i++;
		}
		else { //num<save
			if (sta.top() != num) {
				oper[0] ='N';
				break;
			}
			sta.pop();
			oper[i] = '-';
			i++;
		}
	}
	if (oper[0] == 'N') {
		cout << "NO";
		return 0;
	}
	for (int j = 0; j < i; j++) {
		
		cout << oper[j] << '\n';
	}
	
}