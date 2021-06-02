#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> leftView(Node *root)
{
    if (root == nullptr)
        return {};
 
    queue<Node*> q;
    vector<int> ans;
    q.push(root);
 
    while (!q.empty())
    {    
        int n = q.size();
         
        for(int i = 1; i <= n; i++)
        {
            Node* temp = q.front();
            q.pop();

            if (i == 1)
                ans.push_back(temp->data);
             
            if (temp->left != nullptr)
                q.push(temp->left);
 
            if (temp->right != nullptr)
                q.push(temp->right);
        }
    }
    
    return ans;
    
}