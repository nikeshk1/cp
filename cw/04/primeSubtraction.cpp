#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        
        if(x-y < 2){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}