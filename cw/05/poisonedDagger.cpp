#include<iostream>
#include<vector>

using namespace std;

// for checking if dagger with power 'k' can slay the dragon
bool check(vector<int>&attack, long long h, long long k){
    int n = attack.size();

    for(int i = 1; i < n; i++){
        if(k > attack[i] - attack[i-1])
            h -= attack[i] - attack[i-1];
        else
            h -= k;
    }
    h -= k;
    return h <= 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long h;
        cin >> n >> h;
        vector<int> attack(n);
        for(int i = 0; i < n; i++){
            cin >> attack[i];
        }
        long long low = 0, high = h;
        long long ans = h;
        while(low <= high){
            long long mid = low + (high - low)/2;
            if(check(attack, h, mid)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}