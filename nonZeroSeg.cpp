#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int prefixSum = 0;
    int res = 0;
    unordered_set<int> s;
    s.insert(0);
    for(int i = 0; i < n; i++){
        prefixSum += arr[i];
        if(s.count(prefixSum)){
            res++;
            s.clear();
            prefixSum = arr[i];
            s.insert(0);
        }
        s.insert(prefixSum);
    }
    cout<<res<<endl;
    return 0;
}