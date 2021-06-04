#include <bits/stdc++.h>
#include <vector>
using namespace std;

int getMiddle(Node *head)
{
       struct Node *slow=head;
       struct Node *fast=head;
       
       int i=n;

       if(head==NULL)
        return -1;

       while(fast!=NULL && fast->next!=NULL){
           
           slow=slow->next;      
           fast=fast->next->next;
       }
       
       return slow->data;
}