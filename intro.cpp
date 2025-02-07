#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int N,A;
	    cin >> N >> A;
	    vector<int> C(N),D(N);
	    for(int i = 0; i < N; i++){
	        cin>>C[i]>>D[i];
	    }
	    int maxProfit = 0;
	    for(int L = 0; L < N; L++){
	        for(int R = L; R < N; R++){
	            int profit = (R-L+1)*A;
	            int maxD = D[L], minD = D[L];
	            for(int i = L; i <= R; i++){
	                profit -= C[i];
	                if(D[i] > maxD) maxD = D[i];
	                if(D[i] < minD) minD = D[i];
	            }
	            profit -= (maxD-minD)*(maxD-minD);
	            if(profit > maxProfit)  maxProfit = profit;
	        }
	    }
	    cout<<maxProfit<<endl;
	}
    return 0;
}