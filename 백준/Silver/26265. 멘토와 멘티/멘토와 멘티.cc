#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<string, string>> mento;

bool srt(pair<string,string> a, pair<string,string>b){
	if (a.first == b.first) {
		return a.second > b.second;
	}
	else {
		return a.first < b.first;
	}

}

int main() {
	int n;
	cin >> n;
	string a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		mento.push_back({ a,b });
	}
	sort(mento.begin(), mento.end(), srt);
	for (int i = 0; i < n; i++) {
		cout << mento[i].first << " " << mento[i].second << '\n';
	}
}