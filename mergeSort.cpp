#include<iostream>

using namespace std;

void merge(int low, int mid, int high, vector<int>&arr){
    vector<int> mergedArr;
    int left = low, right = mid+1;

    while(left <= mid && right <= high)
        if(arr[left] <= arr[right]){
            mergedArr.push_back(arr[left++]);
        }else{
            mergedArr.push_back(arr[right++]);
    }

    while(left <= mid)
        mergedArr.push_back(arr[left++]);
    while(right <= high)
        mergedArr.push_back(arr[right++]);
    
    for(auto it: mergedArr)
        arr[low++] = it;
}

void customMergeSort(int low, int high, vector<int>&arr){
    if(low == high)
        return;
    int mid = low + (high-low)/2;
    customMergeSort(low,mid,arr);
    customMergeSort(mid+1,high,arr);

    merge(low,mid,high,arr);
}

void ms(vector<int> &arr){
    int n = arr.size();
    customMergeSort(0,n-1,arr);

}
int main(){
    vector<int> arr = {3,1,2,4,1,5,2,6,4};
    ms(arr);
    for(auto it: arr) cout<<" "<<it;
    return 0;
}