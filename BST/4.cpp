// Inorder Traversal
#include <bits/stdc++.h>
#include"tree.h"
using namespace std;
vector<int> iterative(TreeNode* root)
{
    vector<int> result;
    stack<TreeNode*> st;
    while(root || st.empty())
    {
        while(root)
        {
            st.push(root);
            root=root->left;
        }
        root=st.top();
        st.pop();
        result.push_back(root->val);
        root=root->right;
    } 
    return result;
}
vector<int> ans;
vector<int> recursive(TreeNode* root)
{
    if(root)
    {
        recursive(root->left);
        ans.push_back(root->val);
        recursive(root->right);
    }
    return ans;
}
int main()
{

    return 0;
}