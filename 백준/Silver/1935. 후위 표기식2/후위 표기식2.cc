#include <iostream>
#include <string>
#include <stack>
using namespace std;
double arr[26];
int main() {
	int N;
	cin >> N;
	string str;
	cin >> str;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	stack<double>st;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			st.push(arr[str[i] - 'A']);
		}
		else {
			if (!st.empty()) {
				double kum = st.top();
				st.pop();
				double num = st.top();
				st.pop();
				if (str[i] == '*') {
					st.push(num * kum);
				}
				if (str[i] == '/') {
					st.push(num / kum);
				}
				if (str[i] == '+') {
					st.push(num + kum);
				}
				if (str[i] == '-') {
					st.push(num - kum);
				}
			}
		}
	}
	
	cout.precision(2);
	cout<<fixed << st.top();
}