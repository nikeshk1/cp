#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,n;
        cin>> x >> y >> n;
        int result;
        if(n>x){
            result = n - n%x + y;
            if(result > n)
                result -= x;
        }else if(n == x && y == 0){
            result = n;
        }else{
            result = y;
        }
        cout<<result<<endl;
    }
    return 0;
}