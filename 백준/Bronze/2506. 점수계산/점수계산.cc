#include <iostream>

using namespace std;

int n;
int arr[101];

int main()
{

	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	int sum = 0, num = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			num++;
			sum += num;
		}
		else num = 0;
	}
	cout << sum << endl;
}