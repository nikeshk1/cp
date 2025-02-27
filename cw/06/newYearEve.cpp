#include<iostream>

using namespace std;

int main(){
        long long n, k;
        cin>>n>>k;
        if(k == 1){
            cout<<n<<endl;
            return 0;
        }
        long long ans = 1;
        while(ans < n)
            ans = (ans << 1) + 1;
        cout<<ans<<endl;
    return 0;
}