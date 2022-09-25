#include <iostream>
#include <deque>
using namespace std;
int main() {
	deque<int>card;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		card.push_back(i);
	}
	int a;
	while (true) {
		cout << card.front()<<' ';
		card.pop_front();
		if (card.empty() == 1)
			break;
		a = card.front();
		card.pop_front();
		card.push_back(a);
	}
}