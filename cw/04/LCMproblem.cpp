#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(2*a > b)
            cout<<"-1 -1\n";
        else
            cout<< a <<" "<< 2*a << endl;
    }
    return 0;
}