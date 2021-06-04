#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isPalindrome(Node *head)
{
    Node* t= head;
    stack <int> s;
    
    while(t != NULL){
        s.push(t->data);
        t = t->next;
    }
    
    while(head != NULL ){
        
        int i=s.top();
        s.pop();
        
        if(head -> data != i)
            return false;
        
        head=head->next;
    }
    
    return true;
}