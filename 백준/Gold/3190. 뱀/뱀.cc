#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int chess[1010][1010] = { 0, };

int x;
char ch;
int sum = 0;
int L;
int n, k;
int a = 1, b = 1;
int r, c;
string drt = "right";
int orti[1010];
string ChangeDirect(string drt, char order) {
	if (drt == "right") {
		if (order == 'L') {
			drt = "up";
		}
		else
		{
			drt = "down";
		}
	}
	else if (drt == "left") {
		if (order == 'L') {
			drt = "down";
		}
		else
		{
			drt = "up";
		}
	}
	else if (drt == "up") {
		if (order == 'L') {
			drt = "left";
		}
		else
		{
			drt = "right";
		}
	}
	else if (drt == "down") {
		if (order == 'L') {
			drt = "right";
		}
		else
		{
			drt = "left";
		}
	}
	return drt;
}
bool checkBody[101][101] = { 0, };
int main() {
	deque<pair<int, int>>snake;
	cin >> n;
	cin >> k;
	snake.push_back({ 1,1 });
	checkBody[1][1] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			chess[i][j] = 1;
		}
	}
	for (int i = 0; i < k; i++) {
		cin >> r >> c;
		chess[r][c] = 8;
	}
	cin >> L;
	for (int i = 0; i < L; i++) {
		cin >> k >> ch;
		orti[i] = k;
		if (i != 0) {
			x = orti[i] - orti[i - 1];
		}
		else x = k;
		for (int j = 0; j < x; j++) {
			int cnt = 0;
			if (drt == "right") {
				b++;
				sum++;
				if (checkBody[a][b] == 1) {
					cout << sum;
					exit(0);
				}
				else if (chess[a][b] == 0) {
					cout << sum;
					exit(0);
				}
				else {
					snake.push_back({ a,b });
					checkBody[a][b] = 1;
				}
				if (chess[a][b] == 8) {
					chess[a][b] = 1;
					cnt++;
				}
				if (cnt == 0) {
					checkBody[snake.front().first][snake.front().second] = 0;
					snake.pop_front();

				}
			}
			else if (drt == "left") {
				b--;
				sum++;
				if (checkBody[a][b] == 1) {
					cout << sum;
					exit(0);
				}
				else if (chess[a][b] == 0) {
					cout << sum;
					exit(0);
				}
				else {
					snake.push_back({ a,b });
					checkBody[a][b] = 1;
				}
				if (chess[a][b] == 8) {
					chess[a][b] = 1;
					cnt++;
				}
				if (cnt == 0) {
					checkBody[snake.front().first][snake.front().second] = 0;
					snake.pop_front();

				}
			}
			else if (drt == "up") {
				a--;
				sum++;
				if (checkBody[a][b] == 1) {
					cout << sum;
					exit(0);
				}
				else if (chess[a][b] == 0) {
					cout << sum;
					exit(0);
				}
				else {
					snake.push_back({ a,b });
					checkBody[a][b] = 1;
				}
				if (chess[a][b] == 8) {
					chess[a][b] = 1;
					cnt++;
				}
				if (cnt == 0) {
					checkBody[snake.front().first][snake.front().second] = 0;
					snake.pop_front();

				}
			}
			else if (drt == "down") {
				a++;
				sum++;
				if (checkBody[a][b] == 1) {
					cout << sum;
					exit(0);
				}
				else if (chess[a][b] == 0) {
					cout << sum;
					exit(0);
				}
				else {
					snake.push_back({ a,b });
					checkBody[a][b] = 1;
				}
				if (chess[a][b] == 8) {
					chess[a][b] = 1;
					cnt++;
				}
				if (cnt == 0) {
					checkBody[snake.front().first][snake.front().second] = 0;
					snake.pop_front();

				}
			}
		}
		drt = ChangeDirect(drt, ch);
	}
	while (true) {
		int cnt = 0;
		if (drt == "right") {
			b++;
			sum++;
			if (checkBody[a][b] == 1) {
				cout << sum;
				exit(0);
			}
			else if (chess[a][b] == 0) {
				cout << sum;
				exit(0);
			}
			else {
				snake.push_back({ a,b });
				checkBody[a][b] = 1;
			}
			if (chess[a][b] == 8) {
				chess[a][b] = 1;
				cnt++;
			}
			if (cnt == 0) {
				checkBody[snake.front().first][snake.front().second] = 0;
				snake.pop_front();

			}
		}
		else if (drt == "left") {
			b--;
			sum++;
			if (checkBody[a][b] == 1) {
				cout << sum;
				exit(0);
			}
			else if (chess[a][b] == 0) {
				cout << sum;
				exit(0);
			}
			else {
				snake.push_back({ a,b });
				checkBody[a][b] = 1;
			}
			if (chess[a][b] == 8) {
				chess[a][b] = 1;
				cnt++;
			}
			if (cnt == 0) {
				checkBody[snake.front().first][snake.front().second] = 0;
				snake.pop_front();

			}
		}
		else if (drt == "up") {
			a--;
			sum++;
			if (checkBody[a][b] == 1) {
				cout << sum;
				exit(0);
			}
			else if (chess[a][b] == 0) {
				cout << sum;
				exit(0);
			}
			else {
				snake.push_back({ a,b });
				checkBody[a][b] = 1;
			}
			if (chess[a][b] == 8) {
				chess[a][b] = 1;
				cnt++;
			}
			if (cnt == 0) {
				checkBody[snake.front().first][snake.front().second] = 0;
				snake.pop_front();

			}
		}
		else if (drt == "down") {
			a++;
			sum++;
			if (checkBody[a][b] == 1) {
				cout << sum;
				exit(0);
			}
			else if (chess[a][b] == 0) {
				cout << sum;
				exit(0);
			}
			else {
				snake.push_back({ a,b });
				checkBody[a][b] = 1;
			}
			if (chess[a][b] == 8) {
				chess[a][b] = 1;
				cnt++;
			}
			if (cnt == 0) {
				checkBody[snake.front().first][snake.front().second] = 0;
				snake.pop_front();

			}
		}
	}
}
