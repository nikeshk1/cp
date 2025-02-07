#include<iostream>

using namespace std;

int main(){
    string cardOnTable;
    cin >> cardOnTable;
    for(int i = 0; i < 5; i++){
        string cardInHand;
        cin >> cardInHand;
        if(cardInHand[0] == cardOnTable[0] || cardInHand[1] == cardOnTable[1]){
            cout << "YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}