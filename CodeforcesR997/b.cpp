#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> v(n);
        vector<int> arr(n);
        int temp = n;
        for(int i = 0; i < n; i++){
                cin >> v[i];
                arr[i] = temp--;
        }
        for(int i = n-1; i >= 0; i--){
            int j;
            for(j = 0; j <i; j++){
                if(v[i][j] == '1'){
                    break;
                }
            }
            if(j<i)
                for(int a = j; a < i; a++){
                    int temp = arr[a];
                    arr[a] = arr[a+1];
                    arr[a+1] = temp;
                }
        }
        for(int num:arr){
            cout<<num<<" ";
        }
        cout<<endl;
    }

    return 0;
}