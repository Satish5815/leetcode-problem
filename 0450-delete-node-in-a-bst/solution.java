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
    static TreeNode getSuccesive(TreeNode root){
        TreeNode curr=root.right;
        while(curr!=null && curr.left!=null){
            curr=curr.left;
        }
        return curr;
    }
    public TreeNode deleteNode(TreeNode root, int key) {
        if(root==null) return root;
        if(root.val>key){
            root.left=deleteNode(root.left,key);
        }
        else if(root.val<key){
            root.right=deleteNode(root.right,key);
        }
        else{
            if(root.left==null){
                TreeNode temp=root.right;
                return temp;
            }else if(root.right==null){
                TreeNode temp=root.left;
                return temp;
            }else{
                TreeNode succ=getSuccesive(root);
                root.val=succ.val;
                root.right=deleteNode(root.right,succ.val);
            }
        }
        return root;
    }
}
