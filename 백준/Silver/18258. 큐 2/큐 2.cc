#include <iostream>
#include <string>
using namespace std;
int queue[2000000];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int front = 0, rear = 0;
	int t, size;
	cin >> t;
	string order;
	for (int i = 0; i < t; i++) {
		cin >> order;
		if (order == "push") {
			cin >> queue[rear];
			rear += 1;
		}
		else if (order == "pop") { //front == rear 경우 처리 필요
			if (rear == front) {
				cout << -1 << '\n';
				continue;
			}
			cout << queue[front]<<'\n';
			front += 1;
		}
		else if (order == "size") {
			size = rear - front;
			cout << size << "\n";
		}
		else if (order == "empty") {
			if (rear == front) {
				cout << 1 << "\n";
			}
			else
				cout << 0 << '\n';
		}
		else if (order == "front") {
			if (rear == front) {
				cout << -1 << "\n";
			}
			else
			cout << queue[front] << "\n";
		}
		else if (order == "back") {
			if (rear == front) {
				cout << -1 << "\n";
			}
			else
				cout << queue[rear-1] << "\n";
		}
	}
}