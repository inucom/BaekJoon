#include <iostream>

using namespace std;

int n, m;
char arr1[51][51], arr2[51][51];

bool check() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr1[i][j] != arr2[i][j])
				return 0;
		}
	}
	return 1;
}


int main() {
	
	cin >> n >> m;
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < m; k++) {
			cin >> arr1[j][k]; 
		}
	}
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < m; k++) {
			cin >> arr2[j][k];
		}
	}
	int ans = 0;
	if (n < 3 || m < 3) {
		if (check()) {
			cout << 0;
		}
		else
			cout << -1;
	}
	else {
		for (int i = 0; i < n - 2; i++) {
			for (int j = 0; j < m - 2; j++) {
				if (arr1[i][j] != arr2[i][j]) {
					for (int k = i; k <= i + 2; k++) {
						for (int l = j; l <= j + 2; l++) {
							if (arr1[k][l] == '0')
								arr1[k][l] = '1';
							else
								arr1[k][l] = '0';
						}
					}
					ans++;
				}
				else continue;
			}
		}
		//cout << ans;
		if (check()) {
			cout << ans;
		}
		else
			cout << -1;
	}
	

}
