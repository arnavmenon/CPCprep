#include <bits/stdc++.h>
#include <vector>
using namespace std;

int factorial(int n){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}


void perm_(string S, int& n, vector<string>& ans){
    
    if(!S.size()){
        n++;
        return;
    }
    
    string temp;
    for(int i=0;i<S.size();i++){
        temp=S;
        swap(temp[0], temp[i]);
        for(int i=0; i<factorial(S.size()-1);i++)
            ans[n+i].push_back(temp[0]);
        perm_(temp.substr(1), n, ans);
    };
    
    return;
    
}

vector<string>find_permutation(string S)
{
    int size=factorial(S.size());
    vector<string> ans(size,"");
    int n=0;
    perm_(S, n, ans);
    return ans;
}

int main(){
    vector<string> a;
    string S="ABSG";
    a=find_permutation(S);

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    } 

}