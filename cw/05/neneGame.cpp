#include<iostream>
#include<vector>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];

        for(int i = 0; i < q; i++){
            int query;
            cin>>query;
            cout<<min(query, arr[0]-1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}