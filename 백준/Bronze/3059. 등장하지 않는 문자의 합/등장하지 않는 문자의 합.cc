#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string input;
        cin >> input;
        int n = input.length();
        int arr[26] = { 0 };
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt = input[i] - 65;
            arr[cnt]++;
        }
        int sum = 0;
        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) {
                sum += i + 65;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}