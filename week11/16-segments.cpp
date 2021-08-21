#include <bits/stdc++.h>
#include <vector>
using namespace std;

    int countSegments(string S) {
        int ans=0;
        S.push_back(' ');
        for(int i=1;i<S.size();i++)
            if(S[i] == ' ' && S[i-1] != ' ')
                ans++;
        return ans;
    }