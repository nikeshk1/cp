#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int perimeter = 4*m;
        int x,y;
        cin >>x >>y;
        for(int i=1; i<n; i++){
            cin >>x >>y;
            perimeter += 2*x + 2*y;
        }
        cout<<perimeter<<endl;
    }
    return 0;
}