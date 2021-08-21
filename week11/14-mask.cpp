#include <bits/stdc++.h>
#include <vector>
using namespace std;

 string removeChars(string s1, string s2) {
        
        map<char, int> M;
        
        for(int i=0;i<s2.size();i++){
            M[s2[i]]++;
        }
        
        string ans;
        int j=0;
        
        for(int i=0;i<s1.size();i++){
            
            if(M[s1[i]])
                continue;
            ans.push_back(s1[i]);
        }
        
        return ans;
        
        
    }

int main(){
    string a="computer", b="cat";
    cout<<removeChars(a,b);

    return 0;
}