#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<pair<int,int> > v(n);
    for(int i = 0; i < n; i++){
        v[i].first = i+1;
        cin >> v[i].second;
    }
    sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b){
        return a.second < b.second;
    });
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(v[i].second > k)
            break;
        ans.push_back(v[i].first);
        k -= v[i].second;
    }
    cout<<ans.size()<<"\n";
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
        

    return 0;
}