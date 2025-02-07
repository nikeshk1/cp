#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int a){
    if(a<2)
        return false;

    for(int i = 2; i*i <= a; i++){
        if(a%i == 0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n-2))
        cout<<"2 "<< n-2;
    else
        cout<<"-1";
    return 0;
}

// vector<bool> sieve((int)1e7 + 1, true);

// int main(){
//     int n;
//     cin>>n;
//     sieve[0] = false;
//     sieve[1] = false;
//     for(int i = 2; i*i <= n; i++){
//         if(sieve[i])
//             for(int j = i*i; j <= n; j+=i){
//                 sieve[j] = false;
//             }
//     }
//     for(int i = 2; i <= n/2; i++){
//         if(sieve[i] && sieve[n-i]){
//             cout<<i<<" "<<n-i<<endl;
//             return 0;
//         }
//     }
//     cout<<-1<<endl;
//     return 0;
// }