#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	int input;
	vector<int>dist;
	vector<int> gas;
	for (int i = 0; i < N - 1; i++) {
		cin >> input;
		dist.push_back(input);
	}
	
	for (int i = 0; i < N; i++) {
		cin >> input;
		gas.push_back(input);
	}
	
	long long cost = gas[0] * dist[0];
	int min = gas[0];
	for (int i = 1; i < N-1; i++) {
		if (min < gas[i]) {
			cost += min * dist[i];
		}
		else {
			min = gas[i];
			cost += min * dist[i];
		}
	}
	cout << cost;
}