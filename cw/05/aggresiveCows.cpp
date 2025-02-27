#include<iostream>
#include<vector>

using namespace std;

bool checkDistance(int n, int c, vector<int>&pos, int mid){
    int lastPosition = pos[0];
    c--; 
    for(int i = 1; i < n; i++){
        if(pos[i] - lastPosition >= mid){
            c--; 
            lastPosition = pos[i];
        }
        if(!c)
            return true;
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<int> pos(n);
        for(int i = 0; i < n; i++){
            cin >> pos[i];
        }
        sort(pos.begin(),pos.end());

        int low = 1;
        int high = pos[n-1] - pos[0];
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(checkDistance(n,c,pos,mid)){
                ans = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}