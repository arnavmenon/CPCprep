#include <bits/stdc++.h>
#include <vector>
using namespace std;

n3Hash(const vector<int> &A) {         //exceeds memory limitations should be constant
    
    int n=A.size();
    
    unordered_map<int,int> hash;

    for(int i=0;i<n;i++){
        hash[A[i]]++;
    }

    for (auto i: hash){
        if(i.second > (n/3))
           return i.first; 
    }   
    
    return -1;
}

int n3(const vector<int> &A) {

    int m1=0,m2=0, num1=A[0], num2=A[1];

    for(int i=0; i<A.size(); i++) {

        if(A[i] == num1) 
            m1++;
        
        else if(A[i] == num2) 
            m2++;
        
        else if(m1 == 0) {
            num1=A[i];
            m1=1;
        }

        else if(m2 == 0) {
            num2=A[i];
            m2=1;
        }

        else {
            m1--;
            m2--;
        }
    }

    int freq1=0,freq2=0;

    for(int i=0; i<A.size(); i++) {

        if(A[i] == num1) freq1++;
        if(A[i] == num2) freq2++;
    }

    if(freq1>(A.size()/3)) return num1;
    if(freq2>(A.size()/3)) return num2;

    return -1;
}


