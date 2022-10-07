#include <iostream>
#include <stack>
using namespace std;
int main() {
	int n;
	cin >> n;
	stack<int> st;
	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (st.empty()) {
			st.push(input);
		}
		else { //오류 발생
			while( st.top() <= input) {
				st.pop();
				if (st.empty()) {
					break;
				}
			}
			st.push(input);

		}

	}
	int ans = 0;
		while (!st.empty()) {
			st.pop();
			ans++;
	}
	cout<<ans;
}