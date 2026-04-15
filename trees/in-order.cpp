#include <iostream>
#include <vector>
using namespace std;
class Node
{
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
class Solution {
  public:
  
    void helper(Node* root, vector<int>& result){
        if(root == NULL) return;
        helper(root->left,result);
        result.push_back(root->data);
        helper(root->right,result);
    }
    vector<int> inOrder(Node* root) {
        // code here
        vector<int> result;
        helper(root, result);
        return result;
    }
};