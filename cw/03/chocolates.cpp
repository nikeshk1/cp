#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i  = 0; i < n; i++){
        int temp;
        cin >> temp;
        v[i] = temp;
    }
    int maxPermitted = v[n-1];
    long long total = 0;
    for(int i = n - 1; i >= 0 && maxPermitted > 0; i--){
        maxPermitted = min(maxPermitted, v[i]);
        total += maxPermitted--;
    }
    cout<<total;
    return 0;
}