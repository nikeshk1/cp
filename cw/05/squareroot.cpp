#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    double n;
    cin >> n;
    double left = 0;
    double right = n > 1 ? n : 1;
    double sqRoot;
    
    while(left < right){
        sqRoot = (left+right)/2;
        if(abs(sqRoot*sqRoot - n) < 0.0001)
            break;
        if(sqRoot*sqRoot > n)
            right = sqRoot - 0.0001;
        else
            left = sqRoot + 0.0001;
    }
    printf("%.3f",sqRoot);
    return 0;
}