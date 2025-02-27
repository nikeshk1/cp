#include<iostream>
#include<vector>

using namespace std;

int lowerBound(vector<int>&arr, int target){
    int n = arr.size();
    if(n == 0)
        return -1;
    if(target > arr[n-1])
        return -1;
    int left = 1, right = n-1;
    int ans = n-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(target > arr[mid])
            left = mid + 1;
        else{
            ans = mid;
            right = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>orderedPiles(n+1,0);
    for(int i = 1; i <= n; i++){
        cin>>orderedPiles[i];
        orderedPiles[i] += orderedPiles[i-1];
    }
    int m;
    cin >> m;
    while(m--){
        int q;
        cin>>q;
        cout<<lowerBound(orderedPiles, q)<<endl;
    }

    return 0;
}