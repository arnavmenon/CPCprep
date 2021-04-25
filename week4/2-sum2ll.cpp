#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    stack<int> s1,s2;
    Node* ans=NULL;

    while(first!=NULL){
        s1.push(first->data);
        first=first->next;
    }
    while(second!=NULL){
        s2.push(second->data);
        second=second->next;
    }

    int carry=0;

    while(s1.empty()==false || s2.empty()==false){

        int a=0,b=0;

        if(s1.empty()==false){
            a=s1.top();
            s1.pop();
        }
        if(s2.empty()==false){
            b=s2.top();
            s2.pop();
        }

        int total=a+b+carry;

        Node* t=new Node();

        t->data=total%10;
        carry=total/10;

        if(ans==NULL)
            ans=t;
        else{
            t->next=ans;
            ans=t;
        }
    }

    if(carry!=0){
        Node* t=new Node();
        t->data=carry;
        
        t->next=ans;
        ans=t;
    }
    
    return ans;
}