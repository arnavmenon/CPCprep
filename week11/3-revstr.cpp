#include <bits/stdc++.h>
#include <vector>
using namespace std;

void rev(string s){

    if(!s.size()) return;

    rev(s.substr(1));       // std::string.substr( start, length)
    cout<<s[0];
}