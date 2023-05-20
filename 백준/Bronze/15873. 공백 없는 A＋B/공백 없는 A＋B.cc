#include <iostream>
using namespace std;

int main(){
    int a;
    int b = 0;
    cin>>a;
        
    if (a == 1010){
        cout<<20;
    }
    else if (a % 10 == 0){
        a /= 100;
        cout<<10 + a;
    }
    else{
        b += a % 10;
        a /= 10;
        if (a == 10){
            cout<<10 + b;
        }
        else{
            cout<<a + b;
        }
    }
}