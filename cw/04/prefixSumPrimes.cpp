#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ones = 0, twos = 0;
    while(n--){
        int temp;
        cin >> temp;
        if(temp == 1)
            ones++;
        else
            twos++;
    }
    if(twos){
        cout<<"2 ";
        twos--;
    }
    if(ones){
        cout<<"1 ";
        ones--;
    }
    while(twos){
        cout<<"2 ";
        twos--;
    }
    while(ones){
        cout<<"1 ";
        ones--;
    }
    return 0;
}

// int main(){
//     int n;
//     cin>>n;
//     int oneCount = 0, twoCount = 0;
//     for(int i = 0; i < n; i++){
//         int temp;
//         cin>> temp;
//         if(temp==1) oneCount++;
//         else twoCount++;
//     }
//     vector<bool> sieve(2*n+1, true);
//     sieve[0] = false;
//     sieve[1] = false;
//     for(int i = 2; i*i <= 2*n+1; i++){
//         if(sieve[i])
//             for(int j = i*i; j <= 2*n+1; j+=i){
//                 sieve[j] = false;
//             }
//     }

//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         if(oneCount && sieve[sum+1]){
//                 cout<<"1 ";
//                 oneCount--;
//                 sum+=1;
//         }else if(twoCount && sieve[sum+2]){
//                 cout<<"2 ";
//                 twoCount--;
//                 sum+=2;
//         }else if(twoCount){
//                 cout<<"2 ";
//                 twoCount--;
//                 sum+=2;
//         }else if(oneCount){
//                 cout<<"1 ";
//                 oneCount--;
//                 sum+=1;
//         }
//     }
//     return 0;
// }