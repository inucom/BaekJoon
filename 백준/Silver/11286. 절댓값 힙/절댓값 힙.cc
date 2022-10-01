#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

struct cmp {
	bool operator()(pair<int, int>a, pair<int, int>b) {
		if (a.first == b.first)
			return a.second > b.second;
		else
			return a.first > b.first;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	priority_queue<pair<int,int>,vector<pair<int,int>>, cmp>que;
	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;		if (input != 0) {
			que.emplace(abs(input),input);
		}
		else {
			if (que.empty() != 1) {
				cout << que.top().second<< "\n";
				que.pop();
			}
			else
				cout << 0<<"\n";
		}
	}
}