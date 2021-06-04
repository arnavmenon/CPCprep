#include <bits/stdc++.h>
#include <vector>
using namespace std;

int getMaxWidth(Node* root)
{
    if(root == nullptr)
        return 0;
        
    int ans=INT_MIN;
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()){
        int cur_width = q.size();
        ans = max(cur_width, ans);
    
        while (cur_width){   
            Node* t = q.front();
            q.pop();
    
            if (t->left != nullptr)
                q.push(t->left);
            if (t->right != nullptr)
                q.push(t->right);
                
            cur_width--;
        }
    }
    
    return ans;    
}