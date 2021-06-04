#include <bits/stdc++.h>
#include <vector>
using namespace std;

string compli(string str){
    
    for(int i=0;str[i]!='\0';i++){

        if(str[i]=='0')
            str[i]='1';
        else
            str[i]='0';
    }

    return str;
}
string getLevel(int level){

    if(!level){
        string ret="0";
        return ret;
    }

    string firsthalf=getLevel(level-1);

    return firsthalf+compli(firsthalf);
}

int main(){

    cout<<getLevel(4)<<endl;

    return 0;
}