#include<iostream>

using namespace std;

long long factorial(int n){
    if(n < 2)
        return 1;
    return factorial(n-1) * n;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
        }
        long long result = factorial(10-n)/(factorial(10-n-2)) *3;
        cout<<result<<endl;
    }
    return 0;
}