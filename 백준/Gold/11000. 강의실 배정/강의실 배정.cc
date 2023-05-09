#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

pair<int, int> _class[200001];

int main() {
	int n;
	cin >> n;
	int s, t;
	for (int i = 0; i < n; i++) {
		cin >> s >> t;
		_class[i] = { s,t };
	}
	sort(_class, _class + n);

	//for (int i = 0; i < n; i++) {
	//	cout << _class[i].first << "  " << _class[i].second << "\n";
	//}
	priority_queue <int, vector<int>, greater<int>> pq;

	pq.push(_class[0].second);

	for (int i = 1; i < n; i++) {
		pq.push(_class[i].second);
		if (_class[i].first >= pq.top()){
			//cout << pq.top()<<"\n";
			pq.pop();
		}
	}

	cout << pq.size();

}