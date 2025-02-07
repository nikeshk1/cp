#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        if(n == 2)  cout<<"7\n";
        else if(n == 3) cout<<"5\n";
        else cout<<"3\n";
    }
    return 0;
}