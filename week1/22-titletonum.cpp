#include <bits/stdc++.h>
#include <vector>
using namespace std;

int titletonum(string s) {

    if (s == "") 
        return -1;

    int sum = 0;

    for (int i=0;s[i]!='\0';i++) 
    {
        sum *= 26;
        sum += s[i] - 'A' + 1;
    }

    return sum;
}

int main(){

    cout<<titletonum("AA")<<endl;

    return 0;
}