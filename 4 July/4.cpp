// 💡 **Question 4**

// You need to construct a binary tree from a string consisting of parenthesis and integers.

// The whole input represents a binary tree. It contains an integer followed by zero, one or two pairs of parenthesis. The integer represents the root's value and a pair of parenthesis contains a child binary tree with the same structure.
// You always start to construct the **left** child node of the parent first if it exists.


// /**
//  * Definition for a binary tree node.
  struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
//  */
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string tree2str(TreeNode* root) {
        string result = "";
        if (!root)
            return result;

        result += std::to_string(root->val);
        if (root->left && !root->right) {
            result += "(" + tree2str(root->left) + ")";
        } else if (root->right){
            result += "(" + tree2str(root->left) + ")";
            result += "(" + tree2str(root->right) + ")";
        }
           
        return result;
    }
};