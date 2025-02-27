#include<iostream>

using namespace std;

//only for +ve exponents
long long modExp(long long base, int exp, int mod){
    if(exp == 0)
        return 1;
    if(exp%2 == 0)
        return modExp((base*base)%mod, exp/2, mod);
    else
        return (base * modExp((base*base)%mod, exp/2, mod)) % mod;
}

int main(){
    int t;
    cin >> t;
    int mod = 1e9 + 7;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << modExp(n,k,mod)<< endl;
    }
    return 0;
}