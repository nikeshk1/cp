#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    int x = 0;
    while(t--){
        string st;
        cin >> st;
        if(st[1] == '+') x++;
        else x--;
    }
    cout<<x;
    return 0;
}