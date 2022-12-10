#include <iostream>
using namespace std;
int arr[13];
int ans[6];
int input = -1;
void dfs(int back, int cnt) {
	if (cnt == 6) {
		cout << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << " "
			<< ans[4] << " " << ans[5] << "\n";
		return;
	}
	for (int i = back; i < input; i++) {
		ans[cnt] = arr[i];
		dfs(i + 1, cnt + 1);
	}

}

int main() {
	
	while (input != 0) {
		cin >> input;
		for (int i = 0; i < input; i++) {
			cin >> arr[i];
		}
		dfs(0, 0);
		cout << "\n";
	}
}