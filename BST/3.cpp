// binary tree preorder traversal
#include <bits/stdc++.h>
using namespace std;
#include"tree.h"
vector<int> res;
vector<int> recursive(TreeNode *root)
{
    if(root)
    {
        res.push_back(root->val);
        recursive(root->left);
        recursive(root->right);
    }
    return res;
}
vector<int> nonrecursive(TreeNode* root)
{
    vector<int> result;
    stack<TreeNode*> paser;
    while (root || paser.size())
    {
        if(root)
        {
            result.push_back(root->val);
            paser.push(root);
            root=root->left;
        }
        else
        {
            root=paser.top();
            paser.pop();
            root=root->right;
        }
    }
    return result;
    
}
int main()
{

    return 0;
}