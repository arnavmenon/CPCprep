#include <bits/stdc++.h>
#include <vector>
using namespace std;


string encode(string s)
{     
  int count;
  string ans,t;
  
  for (int i = 0; i < s.size(); i++) {
    
        count = 1;
        
        while (i < s.size() - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }
    
        ans.push_back(s[i]);
        ans+=to_string(count);
    }
      
      return ans;
}     
 
