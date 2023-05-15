#include <iostream>
using namespace std;

int main() {
    int k, d, a;
    char slash;
    cin>>k>>slash>>d>>slash>>a;
    if (k + a < d || d == 0)
        cout<<"hasu";
    else
        cout<<"gosu";
}