#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
	list<char> editer;
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		editer.push_back(input[i]);
	}
	int m;
	cin >> m;
	char order, addch;
	list<char>::iterator iter = editer.end();
	for (int i = 0; i < m; i++) {
		cin >> order;
		if (order == 'P') {
			cin >> addch;
			editer.insert(iter, addch);
		}
		else if (order == 'L') {
			if(iter != editer.begin())
			iter--;
		}
		else if (order == 'D') {
			if (iter != editer.end())
			iter++;
		}
		else if(order =='B'){
			if (iter != editer.begin()) {
				iter--;
				iter = editer.erase(iter);
				
			}
		}
		
	}
	for (iter = editer.begin(); iter != editer.end(); iter++) {
		cout << *iter;
	}
}