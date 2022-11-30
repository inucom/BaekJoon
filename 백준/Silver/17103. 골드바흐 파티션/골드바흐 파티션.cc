#include <iostream>
using namespace std;
int arr[1000001] = {1,1,0,0,};
int main(){
    for(int i = 0 ; i<=1000000; i++){
     if(arr[i]) continue;
     for(int j = 2*i; j<=1000000; j+= i){
         arr[j] = 1;
    }
    }
    int t;
    cin>>t;
    int n;
    for(int i = 0 ; i< t ; i++){
        cin>>n;
        int cnt = 0;
        if( n == 4 || n == 5){
            cout<<1<<'\n';
            continue;
        }
        else{
            int start = 3;
            int end = n - 3;
            while(start<=end){
            if( !arr[start] && !arr[end] ){
                cnt++;
            }
            start+=2;
            end-=2;
            }

        }
        cout<<cnt<<'\n';
    }
}