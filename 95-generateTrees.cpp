//
// Created by KANG on 2019-08-14.
//
#include<vector>
using namespace std;
//  Definition for a binary tree node.

//亚特兰数
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class GenerateTrees {
public:
    vector<TreeNode*> generate_trees(int start, int end){
        vector<TreeNode*> result;
        if(start > end) {
            result.push_back(NULL);
            return result;
        };
        if(start == end){
            TreeNode * node = new TreeNode(start);
            result.push_back(node);
            return result;
        }
        for(int i = start;i<=end;i++) {
            vector<TreeNode*> left = generate_trees(start,i-1);
            vector<TreeNode*> right = generate_trees(i+1,end);
            for(int j = 0; j<left.size();j++){
                for(int z = 0;z<right.size();z++){
                    TreeNode* node = new TreeNode(i);
                    node->left = left[j];
                    node->right = right[z];
                    result.push_back(node);
                }
            }
        }
        return result;
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> result;
        if(n<=0) return result;
        else
            return generate_trees(1,n);
    }
};

