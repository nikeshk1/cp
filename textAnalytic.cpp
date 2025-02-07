#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

// you just need to implement this function
string mostCommonWord(string document) {
    string word = "";
    int len = document.length();
    vector<string> v;
    unordered_map<string, int> mp;
    int maxValue = 0;
    for(int i = 0; i < len; i++){
        if(document[i] >= 'A' && document[i] <= 'Z')
            document[i] += 32;

        if(document[i] == ' ' && word != ""){
            if(mp.find(word) == mp.end()){
                mp[word] = 1;
                v.push_back(word);
            }else{
                mp[word]++;
            }
            if(mp[word] > maxValue) maxValue = mp[word];
            word = "";
        }else{
            if(document[i] != ' ')
                word.push_back(document[i]);
        }
    }
    if(word!=""){
        if(mp.find(word) == mp.end()){
                mp[word] = 1;
                v.push_back(word);
            }else{
                mp[word]++;
            }
            if(mp[word] > maxValue) maxValue = mp[word];
            word = "";
    }
    for(string str : v){
        if(mp[str] == maxValue) return str;
    }
    return "";
}

int main() {
    string document;
    getline(cin, document);

    // please do not change the below code
    cout << mostCommonWord(document);
    return 0;
}