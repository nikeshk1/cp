#include<iostream>
using namespace std;

int main(){
    int t; 
    cin >> t;
    int mod = 1e9 + 7;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long  m = 1;
        int ans = 0;
        while(k > 0){
            int rem = k%2;
            if(rem == 1){
                ans += m; ans %= mod;
            }
            m *= n; m %= mod;
            k /= 2;
        }
        cout<<ans<<endl;
    }
    return 0;
}