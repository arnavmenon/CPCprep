#include <bits/stdc++.h>
#include <vector>
using namespace std;

void printLLReverse(Node* head) 
{ 
    if (head==NULL) 
        return; 
  
    printLLReverse(head->next); 

    cout<<head->data<<" "; 
} 