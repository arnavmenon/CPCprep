#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> findSpiral(Node *root)
{
    if (root == nullptr)
        return{}; 
  
    stack<struct Node*> s1; 
    stack<struct Node*> s2; 
    vector<int> ans;
    
    s1.push(root);
  
    while (!s1.empty() || !s2.empty()) {
           
        while (!s1.empty()) {   //right to left printing

            struct Node* temp = s1.top();
            s1.pop();
            ans.push_back(temp->data);
    
            if (temp->right)
                s2.push(temp->right);
            if (temp->left)
                s2.push(temp->left);
        } 
        
        while (!s2.empty()) { // left to right printing

            struct Node* temp = s2.top();
            s2.pop();
            ans.push_back(temp->data);
         
            if (temp->left)
                s1.push(temp->left);
            if (temp->right)
                s1.push(temp->right);
        }
    }
    
    return ans;
}
