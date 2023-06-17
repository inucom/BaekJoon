#include <iostream>
#include <algorithm>
using namespace std;
 
int K[3];

int main()
{
	cin >> K[0];
	cin >> K[1];
	cin >> K[2];
	
	sort(K, K + 3);
 
	cout << max(K[2] - K[1], K[1] - K[0]) - 1;
}