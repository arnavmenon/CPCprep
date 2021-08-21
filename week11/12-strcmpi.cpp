#include <bits/stdc++.h>
#include <vector>
using namespace std;

int strcmpi(char* A, char* B){

    int i;
    while(A[i] !='\0' && B[i]!='\0'){

        if(A[i]==B[i] || A[i]==(B[i] ^ 32))
            i++;
        else 
            break;
    }

    if(A[i]==B[i])
        return 0;

    if( (A[i] | 32) < (B[i] | 32))  
        return -1;

    return 1;

}