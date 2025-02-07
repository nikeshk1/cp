#include<iostream>
#include<cmath>

using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int num;
            cin>>num;
            if(num){
                cout<<abs(i-2) + abs(j-2) << endl;
                return 0;
            }
        }
    }
    return 0;
}