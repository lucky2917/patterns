#include <iostream>
using namespace std;
class TreeNode
{
  public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val = x;
        left = right = NULL;
    }
};
class Solution {
public:
    bool sub(TreeNode* n1, TreeNode* n2){
        if(n1 == NULL && n2 == NULL) return true;
        if(n1 == NULL || n2 == NULL) return false;
        if(n1->val != n2->val) return false;
        return sub(n1->left, n2->left) && sub(n1->right,n2->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL) return false;
        if(root->val == subRoot->val){
            if(sub(root, subRoot)) return true;
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};