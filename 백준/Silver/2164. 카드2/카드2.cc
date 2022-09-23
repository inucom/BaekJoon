#include <iostream>
#include <queue>
using namespace std;
queue<int> card;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		card.push(i);
	}
	int move;
	while (card.size() != 1) {
		card.pop();
		move = card.front();
		card.pop();
		card.push(move);
	}
	cout << card.front();
}