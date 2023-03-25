#include <iostream>
using namespace std;

int main() {
    int n, maxPrize = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int prize = 0;
        if (a == b && b == c) {
            prize = 10000 + a * 1000;
        } else if (a == b || a == c || b == c) {
            if (a == b || a == c) prize = 1000 + a * 100;
            else prize = 1000 + b * 100;
        } else {
            prize = max(a, max(b, c)) * 100;
        }

        if (prize > maxPrize) maxPrize = prize;
    }

    cout << maxPrize;
}
