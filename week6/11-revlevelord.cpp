#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> reverseLevelOrder(Node *root)
{
    if (root == nullptr)
        return {-1};

    queue<Node *> q;
    stack <Node *> s;
    vector<int> ans;
    q.push(root);
    
    while (!q.empty())
    {
        Node* node = q.front();
        q.pop();
        s.push(node);
        
        // **** right before left here
        if (node->right != NULL)
            q.push(node->right);
            
        if (node->left != NULL)
            q.push(node->left);
    
    }
    
    while (!s.empty())
    {
        Node *node = s.top();
        ans.push_back(node->data);
        s.pop();
    }
    
    return ans;
}