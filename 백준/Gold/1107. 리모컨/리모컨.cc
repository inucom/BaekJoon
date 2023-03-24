#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std; 

string n;
bool breakButton[10] = {false,};
int INFF = 1000000;
int main() {
	cin >> n;
	int b;
	cin >> b;
	int input;
	for (int i = 0; i < b; i++) {
		cin >> input;
		breakButton[input] = true;
	}
	int low = abs(stoi(n) - 100);
	int back = INFF, front = INFF;
	for (int i = stoi(n); i < INFF; i++) {
		string checkNum = to_string(i);
		bool check = false;
		for (int j = 0; j < checkNum.length(); j++) {
			if (breakButton[checkNum[j] - '0']) {
				check = true;
				break;
			}
		}
		if (check == false) {
			back = abs(stoi(n) - i) + checkNum.length();

			break;
		}
	}
	for (int i = stoi(n); i >= 0; i--) {
		string checkNum = to_string(i);
		bool check = false;
		for (int j = 0; j < checkNum.length(); j++) {
			if (breakButton[checkNum[j] - '0']) {
				check = true;
				break;
			}
		}
		if (check == false) {
			front = abs(stoi(n) - i) + checkNum.length();
			break;
		}
	}
	int ans = min({back, front, low});
	//cout << "back " << back << "    "<< "front " << front << "    ans   "<<ans<<"\n";
	cout << ans;
}

//vector <int> setN(6, 0);
//vector<int>ansv(6.0);
//int comNum = 0, minium = 999999;
//int findNum = 0;
//for (int i = 0; i < n.length(); i++) {
//	int num = n[i] - '0';
//	cout << i << "번째 자리 처리\n";
//	for (int j = 0; j < 10; j++) {
//		if (breakButton[j] == false) {
//			int tmpNum = findNum + j;
//			for (int k = i + 1; k < n.length(); k++) {
//				tmpNum *= 10;
//			}
//			//cout <<findNum<< "\n";
//			if (abs(stoi(n) - tmpNum) < minium && tmpNum != 0) {
//				cout << tmpNum << " => " << abs(stoi(n) - tmpNum) << " => ";
//				minium = abs(stoi(n) - tmpNum);
//				cout << minium << "\n";
//				setN[i] = j;
//				cout << setN[i] << "\n";
//			}
//		}
//	}
//	findNum += setN[i];
//	findNum *= 10;
//}
/*for (int i = 0; i < n.length(); i++) {
	int num = n[i] - '0';
	for (int j = num; j < 10; j++) {
		if (breakButton[j] == false) {
			setN[i] = j;
			break;
		}
	}
}
for (int i = 0; i < n.length(); i++) {
	int num = n[i] - '0';
	for (int j = num-1; j >=0; j--) {
		if (breakButton[j] == false) {
			int a = abs(num - j);
			int b = abs(num - setN[i]);
			if (b > a) {
				setN[i] = j;
				break;
			}
		}
	}
}*/