#include <iostream>
#include <set>
using namespace std;
int main() {
	set<int> arr1;
	set<int> tmp;
	set<int>arr2;
	int a, b;
	cin >> a >> b;
	int x;
	for (int i = 0; i < a; i++) {
		cin >> x;
		arr1.emplace(x);
		tmp.emplace(x);
	}
	for (int i = 0; i < b; i++) {
		cin >> x;
		arr2.emplace(x);
		
	}
	for (auto i = arr2.begin(); i!=arr2.end(); i++) {
		arr1.erase(*i);
	}
	for (auto i = tmp.begin(); i != tmp.end(); i++) {
		arr2.erase(*i);
	}
	cout << arr1.size() + arr2.size();
	//arr1.size()+ 
	
}