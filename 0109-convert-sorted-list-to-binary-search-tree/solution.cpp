/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* BuildHelper(vector<int>& v,int s,int e){
        if(s>e) return NULL;
        int mid=(s+e)/2;
        int rootData=v[mid];
        TreeNode *root=new TreeNode(rootData);
        root->left=BuildHelper(v,s,mid-1);
        root->right=BuildHelper(v,mid+1,e);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        int n=v.size()-1;
        TreeNode* root= BuildHelper(v,0,n);
        return root;
        
    }
};
