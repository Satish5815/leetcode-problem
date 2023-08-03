/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildT(vector<int> in,vector<int> pre,int is,int ie,int &postIndex) {
        if(is>ie) return NULL;
        TreeNode* root=new TreeNode(pre[postIndex--]);
        int index=0;
        for(int i=is;i<=ie;i++){
            if(in[i]==root->val){
                index=i;
                break;
            }
        }
        root->right=buildT(in,pre,index+1,ie,postIndex);
        root->left=buildT(in,pre,is,index-1,postIndex);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex=postorder.size()-1;
        return buildT(inorder,postorder,0,postorder.size()-1,postIndex);
    }
};
