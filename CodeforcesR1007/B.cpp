#include<iostream>
#include<numeric>
#include<cmath>
#include<vector>
using namespace std;

bool isPerfectSquare(long long n){
    long long sqroot = (long long)sqrt(n);
    return (sqroot * sqroot == n);
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        if(isPerfectSquare(n * 1LL * (n+1) / 2)){
            cout<< -1 << endl;
            continue;
        }
        vector<int> v(n);
        iota(v.begin(), v.end(), 1);
        long long sum = 0;
        for(int i = 0; i < n-1; i++){
            if(isPerfectSquare(sum + v[i]))
                swap(v[i],v[i+1]);
            sum += v[i];
        }
        for(int num: v)
            cout << num << " ";
        cout << endl;
    }
    return 0;
}