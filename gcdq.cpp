#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> arr(n+1,0);
    for(int i = 1; i<=n; i++){
        cin>> arr[i];
    }
    vector<int> fgcd(n+1,0);
    vector<int> bgcd(n+1,0);
    for(int i = 1; i<=n; i++){
        fgcd[i] = gcd(fgcd[i-1],arr[i]);
        bgcd[n-i] = gcd(bgcd[n-i+1],arr[n-i+1]);
    }
    int l,r;
    while(q--){

        cin >>l>>r;
        cout<<gcd(fgcd[l-1],bgcd[r])<<endl;
    }
    return 0;
}