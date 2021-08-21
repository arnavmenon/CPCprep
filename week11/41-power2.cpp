#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isPowerOfTwo(int num) {
    
    if(num<=0)
        return false;
    
    int count=0;
    
    while(num){
        if(num & 1)
            count++;
        
        num=num>>1;
    }
    
    if(count>1)
        return false;
    
    return true;
}
    
