#include <iostream>
#include <string>

using namespace std;
int k = 0;
int recursion(string& s, int l, int r) {
    k++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(string& s) {
    return recursion(s, 0,s.length()-1);
}

int main() {
    
    int n;
    cin >> n;
    string input;
    for (int i = 0; i < n; i++) {
        k = 0;
        cin >> input;
        cout << isPalindrome(input) << " " << k << "\n";
    }
}