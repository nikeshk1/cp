#include<iostream>
#include<vector>

using namespace std;

int main(){
    string n;
    cin>>n;
    if(n[0] != '9' && n[0] > '4')
            n[0] = '0' + '9' - n[0];
    
    for(int i = 1; i < n.length(); i++){
        if(n[i] > '4')
            n[i] = '0' + '9' - n[i];
    }
    cout<<n;
    return 0;
}
