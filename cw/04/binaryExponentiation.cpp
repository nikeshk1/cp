#include<iostream>

using namespace std;

long long power(int a, int b){
    if(b==0)
        return 1;
    long long x = power(a,b/2);
    return b%2==0 ? x*x : x*x * a;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<power(a,b)<<endl;
    }
    return 0;
}