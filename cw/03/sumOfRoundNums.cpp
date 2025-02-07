#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout<<endl;
        vector<int> terms;
        int multiplier = 1;
        while(n){
            int temp = n%10;
            if(temp)
                terms.push_back(multiplier * temp);
            multiplier *= 10;
            n /= 10;
        }
        cout<<terms.size()<<endl;
        for(int term : terms)
            cout<<term<<" ";
        cout<<endl;
    }

    return 0;
}