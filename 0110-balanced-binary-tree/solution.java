/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    static int isB(TreeNode root){
        if(root==null){
            return 0;
        }
        int lh=isB(root.left);
        if(lh<=-1) return -1;
         int rh=isB(root.right);
        if(rh<=-1) return -1;
        if(Math.abs(lh-rh)>1) return -1;
        else return Math.max(lh,rh)+1;
    }
    public boolean isBalanced(TreeNode root) {
        int res=isB(root);
        return res==-1 ? false:true;
    }
}
