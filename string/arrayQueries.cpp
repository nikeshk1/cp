#include<bits/stdc++.h>
using namespace std;

vector<int> array_queries (int N, int M, vector<int> A, vector<int> B, int Q, vector<vector<int> > queries) {
    int Fn = 0;
    vector<int> res_queries;

    


    res_queries.push_back(Fn);
    
    int q = 1;
    while(q <= Q){
        int qType = queries[q-1][0], i = queries[q-1][1], j = queries[q-1][2];
        if(qType == 1){
            //removing affected terms
            swap(A[i-1],B[j-1]);
            //adding new terms
        } else if(qType == 2){
            //removing affected terms
            swap(A[i-1],A[j-1]);
            //adding new terms
        }else if(qType == 3){
            //removing affected terms
            swap(B[i-1],B[j-1]);
            //adding new terms
        }
        res_queries.push_back(Fn);
    }

    return res_queries;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int M;
        cin >> M;
        vector<int> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }
        vector<int> B(M);
        for(int i_B = 0; i_B < M; i_B++)
        {
        	cin >> B[i_B];
        }
        int Q;
        cin >> Q;
        vector<vector<int> > queries(Q, vector<int>(3));
        for (int i_queries = 0; i_queries < Q; i_queries++)
        {
        	for(int j_queries = 0; j_queries < 3; j_queries++)
        	{
        		cin >> queries[i_queries][j_queries];
        	}
        }

        vector<int> out_;
        out_ = array_queries(N, M, A, B, Q, queries);
        cout << out_[0];
        for(int i_out_ = 1; i_out_ < out_.size(); i_out_++)
        {
        	cout << " " << out_[i_out_];
        }
        cout << "\n";
    }
}