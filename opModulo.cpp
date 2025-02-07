#include<iostream>

using namespace std;

int main(){
    long long L,R;
    cin >> L >> R;
    long long fPrev = 0, f = 0;
    long long sum = 0;
    for(int i = 2; i < L-1; i++){
        fPrev += (L-1)%i;
    }
    for(int i = L; i <= R; i++){
        for(int j = 2; j < i; j++){
            f += i%j;
        }
        if(f == fPrev)
            sum += i;

        fPrev = f;
        f = 0;
    }
    cout<<sum;

    return 0;
}