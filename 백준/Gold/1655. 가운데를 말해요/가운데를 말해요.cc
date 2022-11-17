#include <iostream>
#include <queue>
using namespace std;
int arr[100001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int input;
	priority_queue<int,vector<int>,greater<int>>minHeap;
	priority_queue<int>maxHeap;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (minHeap.size() >= maxHeap.size()) {
			maxHeap.emplace(input);
		}
		else
			minHeap.emplace(input);
		if (!maxHeap.empty() && !minHeap.empty()) {
			if (maxHeap.top() > minHeap.top()) {
				int a, b;
				a = maxHeap.top();
				b = minHeap.top();
				maxHeap.pop();
				minHeap.pop();
				maxHeap.push(b);
				minHeap.push(a);
			}
		}
		arr[i] = maxHeap.top();
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}
	
}