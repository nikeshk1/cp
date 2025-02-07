#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int>&arr, int low, int high){
    int pivot = arr[low];
    int i = low, j = high;

    while(i<j){
        while(arr[i] <= pivot && i < high)
            i++;
        while(arr[j] > pivot && j > low)
            j--;
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[low]);
    return j;
}

void qs(vector<int>&arr, int low, int high){
    if(low >= high) return;

    int pivotIndex = partition(arr,low,high);
    qs(arr, low, pivotIndex-1);
    qs(arr, pivotIndex+1, high);
}
void qsort(vector<int>&arr){
    qs(arr,0,arr.size()-1);
}
int main(){
    vector<int> arr = {3,1,2,4,1,5,2,6,4};
    qsort(arr);
    for(auto it:arr) cout<<" "<<it;
    return 0;
}