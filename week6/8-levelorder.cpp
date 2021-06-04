#include <bits/stdc++.h>
#include <vector>
using namespace std;

// already done in q4 max width

vector<int> levelOrder(Node* root)
{
    if (root == nullptr)
        return {-1};

    queue<Node *> q;
    vector<int> ans;
    q.push(root);
    
    while (q.empty() == false)
    {
        Node *node = q.front();
        ans.push_back(node->data);
        q.pop();
    
        if (node->left != NULL)
            q.push(node->left);
    
        if (node->right != NULL)
            q.push(node->right);
    }
    
    return ans;
}