#include <iostream>
#include <vector>
using namespace std;
class TreeNode
{
  public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        data = x;
        left = right = NULL;
    }
};

//bfs solution
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            TreeNode* str = node->left;
            node->left = node->right;
            node->right = str;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            q.pop();
        }
        return root;
    }
};

//dfs solution
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return NULL;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};