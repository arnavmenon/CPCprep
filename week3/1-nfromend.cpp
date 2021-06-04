#include <bits/stdc++.h>
#include <vector>
using namespace std;

int getNthFromLast(Node *head, int n)
{
       struct Node *slow=head;
       struct Node *fast=head;
       
       int i=n;
       while(i>0){
           
           if(fast == NULL)
                return -1;
                
           fast=fast->next;
           i--;
       }
       
       while(fast!=NULL){
           slow=slow->next;
           fast=fast->next;
       }
       
       return slow->data;
}