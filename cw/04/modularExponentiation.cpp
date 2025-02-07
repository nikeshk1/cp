#include<iostream>

using namespace std;
long long power(int a, int b){
    if(b==0)
        return 1;
    long long x = power(a,b/2);
    return b%2==0 ? x*x : x*x * a;
}

int main(){
    int n, m;
    cin >> n >> m;
    if(n>26)
        cout<<m<<endl;
    else{
        long long x = power(2, n);
        if(x>m)
            cout<<m<<endl;
        else
            cout<<m%x<<endl;
    }
    return 0;
}