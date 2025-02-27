#include<iostream>
#include<bit>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        while(n>0){
            n = n >> 1;
            count++;
        }
        cout<<(1 << (count-1)) - 1<<endl;
    }
    return 0;
}