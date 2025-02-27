#include<iostream>

using namespace std;

int lowerBound(vector<int>&arr,int start, int end, int target){
    if(target > arr[end])
        return end+1;
    if(start >= end){
        return start;
    }
    int mid = start + (end - start)/2;
    if(target == arr[mid])
        return mid;
    if(target > arr[mid])
        return lowerBound(arr, mid+1, end, target);
    else
        return lowerBound(arr, start, mid, target);
}
int main(){
    vector<int> arr = {2,5,11,23,41,50,63};
    int target;
    cin>>target;
    int res = lowerBound(arr, 0, arr.size()-1, target);
    cout<<res;
    return 0;
}