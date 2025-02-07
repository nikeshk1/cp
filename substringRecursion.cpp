#include<iostream>
#include<vector>
using namespace std;

int arr[] = {1,3,5,4,2,8,7};

void subsequence(int i, vector<int> &a){
    if(i==sizeof(arr)/sizeof(arr[0])){
        cout<<"--";
        for(int x:a)
            cout<< x<<" ";
        cout<<endl;
        return;
    }
    a.push_back(arr[i]);
    subsequence(i+1,a);
    a.pop_back();
    subsequence(i+1,a);
}

int main(){
    vector<int> v;
    subsequence(0,v);
}