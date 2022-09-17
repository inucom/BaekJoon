#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t,x1, y1, r1, x2, y2, r2;
	double dis1;
	int dis2;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		dis1 = sqrt(pow(x1 - x2, 2)+pow(y1-y2,2));
		dis2 = r1 + r2;
		if (dis1 == 0) {
			if (r1 == r2) //중심, 반지름 길이 같을때
				cout << -1 << "\n";
			else //중심이 같지만 반지름 길이 다를때
				cout << 0 << "\n";
		}
		else if (dis1 == dis2) { //중심끼리의 거리와 두 원의 반지름 합이 같을 때
			cout << 1<<"\n";
		}
		else if (dis1 < dis2) { //dis1< dis2, 많은 경우 따져야할것
			if ((dis1 + r1) < r2 || (dis1 + r2) < r1) {
				cout << 0 << "\n";
			}
			else if ((dis1 + r1) == r2 || (dis1 + r2) == r1) {
				cout << 1 << "\n";
			}
			else
				cout << 2 << "\n";
		}
		else cout << 0<<"\n";

		//if (dis1 == 0) {
		//	if (r1 != r2) {
		//		cout << 0<<"\n";
		//	}
		//	else
		//		cout << -1<<"\n";
		//}
		//else if (dis1 > dis2) { //중점 사이거리 > 반지름합
		//	cout << 0 << "\n";
		//}
		//else if (dis1 < dis2) { //중점 사이거리 < 반지름합
		//	if (dis1 < r1 || dis1 < r2) {
		//		if ((dis1 + r1) == r2 || (dis1 + r2) == r1)
		//			cout << 1<<"\n";
		//		else
		//			cout << 0<<"\n";
		//	}
		//	else cout << 2<<"\n";
		//}
		//else
		//	cout << 1 << "\n";
	}
}