#include<iostream>
#include<vector>

using namespace std;

// for checking if m cookies are possible with available ingredients
bool check(vector<int>&req, vector<int>&a, int k, int m){
    int n = req.size();
    for(int i = 0; i < n; i++){
        int r = req[i]*m;
        if(a[i]+k < r)
            return false;
        if(a[i] < r)
            k -= r - a[i];
    }
    return true;
}

int main(){
    int n, k; // n - no. of ingredients, k - magic ingredient quantity
    cin >> n >> k;
    vector<int> req(n); // required quantities of ingredients per cookie
    vector<int> a(n); // available quantities of ingredients per cookie
    for(int i = 0; i < n; i++)
        cin>>req[i];
    for(int i = 0; i < n; i++)
        cin>>a[i];

    int low = 0;
    int high = (a[0]+k)/req[0];
    int ans = 0;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(check(req, a, k, mid)){
            ans = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}