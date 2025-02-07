#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
            a[i] -= temp;
        }
        int negative = 0, zero = 0;
        string result = "YES";
        int singleNegIndex;
        for(int i = 0; i < n; i++){
            if(a[i] < 0){
                singleNegIndex = i;
                negative++;
            }
            else if(a[i] == 0)
                zero++;
        }
        if(negative > 0 && negative + zero > 1){
            result = "NO";
        }else if(negative == 1){
            for(int i = 0; i < n; i++){
                if(i == singleNegIndex) continue;
                if(a[i] + a[singleNegIndex] < 0){
                    result = "NO";
                }
            }
        }
        cout<<result<<endl;
    }
    return 0;
}