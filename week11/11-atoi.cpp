#include <bits/stdc++.h>
#include <vector>
using namespace std;


int atoi(const char* A) {

    int ans=0;
    int i=0;

    while(A[i]==' '){
        i++;
    }

    int sign=1;

    if(A[i]=='-'){
        sign=-1;
        i++;
    }

    if(A[i] == '\0')
        return 0;
        
    while( A[i]>= '0' && A[i]<= '9' ){

        if(ans > INT_MAX/10 || (ans==INT_MAX/10 && A[i]- '0' > 7)){
            if(sign==1) return INT_MAX;
            else return INT_MIN;
        }
            
        ans=ans*10;
        ans+=A[i++]-'0';
    }

        
    return ans*sign;

}