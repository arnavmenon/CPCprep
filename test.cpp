#include<bits/stdc++.h>
using namespace std;

vector<long long> solve (int N, int Q, vector<int> A, vector<vector<int> > query) {

   vector<long long> ans;
   vector<long long> prefix(N,0);

   prefix[0]=A[0];
   for(int i=1;i<N;i++){
      prefix[i]= prefix[i-1] + A[i];
   }

   int qno=0;
   vector<int> cur;

   while(qno < Q){

      cur=query[qno];
      int q=cur[0], l=cur[1], r=cur[2];

      if(q == 1){
         int dif= r - A[l-1];
         A[l-1]=r;

         for(int i=l-1; i<N; i++){
            prefix[i] += dif;
         }
      }

      else{
         
         long long sum=0;
         for(int j=l-1; j<=r-1; j++){
            sum += A[j] * (prefix[r-1] - prefix[j]);
         }

         ans.push_back(sum);
      }

      qno++;
   }

   return ans;
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int Q;
    cin >> Q;
    vector<int> A(N);
    for(int i_A = 0; i_A < N; i_A++)
    {
    	cin >> A[i_A];
    }
    vector<vector<int> > query(Q, vector<int>(3));
    for (int i_query = 0; i_query < Q; i_query++)
    {
    	for(int j_query = 0; j_query < 3; j_query++)
    	{
    		cin >> query[i_query][j_query];
    	}
    }

    vector<long long> out_;
    out_ = solve(N, Q, A, query);
    for(int i_out_ = 0; i_out_ < out_.size(); i_out_++)
    {
    	cout << out_[i_out_] << endl;
    }

    return 0;
}