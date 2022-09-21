#include <iostream>
#include <algorithm>
using namespace std;
struct coo { //좌표 담기
	int x, y;
};
bool cmp(coo before, coo later) {
	if (before.x == later.x) {
		return before.y < later.y;
	}
	else
	{
		return before.x < later.x;
	}
}
coo rid[100001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> rid[i].x >> rid[i].y;
	}
	sort(rid, rid + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << rid[i].x << " " << rid[i].y<<"\n";
	}

}