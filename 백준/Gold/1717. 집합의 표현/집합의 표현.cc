#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int arr[1000001];
int root[1000001];


int find(int a) {
	if (arr[a] == -1) {
		return a;
	}
	return arr[a] = find(arr[a]);
}

void set_union(int a, int b) {
	int r1 = find(a);
	int r2 = find(b);
	if (r1 != r2) {
		arr[r1] = r2;
	}
	else return;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	memset(arr, -1, (n + 1)*sizeof(int));
	int a, b, c;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		if(a == 0){
			set_union(b, c);
		}
		else {
			if (find(b) != find(c)) {
				cout << "no\n";
			}
			else
				cout << "yes\n";
		}
	}
}