#include <bits/stdc++.h>
#include <vector>
using namespace std;

string numtotitle(int n) {

    if(n < 1)
        return "";

    else
    {
        string res = "";
        while(n){

            n --;                   //cause starts from 'A' ie index 0 here
            char c = n%26 + 'A';
            res = c+res;
            n /= 26;
        }

        return res;
    }
}

int main(){

    cout<<numtotitle(12)<<endl;

    return 0;
}