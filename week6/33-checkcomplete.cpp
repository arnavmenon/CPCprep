#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isCompleteBT(Node* root){

    if (root == nullptr)
        return true;
            
    queue<Node*> q;
    q.push(root);  
    bool flag = false;
    
    while(!q.empty())
    {
        Node *temp =q.front();
        q.pop();
    
        if(temp->left){
            if (flag == true)
                return false;
        
            q.push(temp->left);
        }
        
        else 
            flag = true;
        
        if(temp->right){
            if(flag == true)
                return false;
        
            q.push(temp->right); 
        }    
        else 
            flag = true;
    }
    
    return true;
}