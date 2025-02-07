#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(char ch:s){
            if(ch == '1'){
                cout<<"13\n"; break;
            }else if(ch == '3'){
                cout<<"31\n"; break;
            }
        }
    }
}