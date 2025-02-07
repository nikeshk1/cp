#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int result = n;
        for(int i = 0, j = n-1; i<=j; i++,j--){
            if(s[i] == '1' || s[j] == '1'){
                result = 2*(n-i);
                break;
            }
        }
        cout<<result<<endl;
    }

    return 0;
}