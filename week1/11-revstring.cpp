#include <bits/stdc++.h>
#include <vector>
using namespace std;

string reverseString(string str){

int len=0;
for(int i=0;str[i]!='\0';i++)
    len++;

int start=0, end=len-1;
while (start < end)
    
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    
return str;
    
}

//to do recursively

/* if (start >=end) return;
swap (start, end)
reverseString(str, start+1, end-1) */