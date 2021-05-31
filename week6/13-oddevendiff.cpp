#include <bits/stdc++.h>
#include <vector>
using namespace std;

int getLevelDiff(Node *root)
{
    if (root == nullptr)
        return 0;

    queue<Node *> q;
    int ans;
    bool odd=true;
    q.push(root);
    
    while (q.empty() == false)
    {
        int size=q.size();
        
        while(size){
        
            Node *node = q.front();
        
            if(odd)
                ans+=node->data;
            else
                ans-=node->data;
                
            q.pop();
        
            if (node->left != NULL)
                q.push(node->left);
        
            if (node->right != NULL)
                q.push(node->right);
                
            size--;
        }
        
        odd=!odd;
            
    }
    
    return ans;
}