#include <bits/stdc++.h>
#include <vector>
using namespace std;

void printAncestors(struct Node *root, int key)
{
    if (root == nullptr) 
        return;
 
    stack<struct Node* > s1;
 
    while (true)
    {
        while (root && root->data != key)
        {
            s1.push(root);   
            root = root->left;  
        }
        
        if (root && root->data == key)
            break;
      
        if (s1.top()->right == nullptr)
        {
            root = s1.top();
            s1.pop();

            while (!s1.empty() && s1.top()->right == root)
               {root = s1.top();
               s1.pop();
               }
        }
 
        root = s1.empty() ? nullptr : s1.top()->right;
    }
 
    while (!s1.empty())
    {
        cout<<s1.top()->data<<" ";
        s1.pop();
    }
}