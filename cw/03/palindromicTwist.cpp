#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        string ans = "YES";
        for(int i = 0; i < n/2; i++){
            char startPrev = s[i] - 1, startNext = s[i] + 1;
            char endPrev = s[n-1-i]-1, endNext = s[n-1-i]+1;

            if(startPrev != endPrev && startPrev != endNext && startNext != endPrev && startNext != endNext){
                ans = "NO";
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}