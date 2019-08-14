//
// Created by KANG on 2019-08-13.
//

#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class InorderTraversal {
public:
    vector<int> result;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL) return result;
        inorderTraversal(root->left);
        result.push_back(root->val);
        inorderTraversal(root->right);
        return result;
    }

    //使用栈可以节约很多时间(避免了递归时的堆栈耗时)
    vector<int> inorderTraversal_stack(TreeNode* root) {
        stack<TreeNode*> s;
        if(root == NULL) return result;
        TreeNode* node = root;
        while(node || !s.empty()){
            while(node){
                s.push(node);
                node = node -> left;
            }
            result.push_back(s.top()->val);
            node = s.top()->right;
            s.pop();
        }
        return result;
    }
};

