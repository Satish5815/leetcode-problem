/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
         int lenght=1;
         ListNode curr=head;
         if(head==null || head.next==null || k==0) return head;
         while(curr.next!=null){
             curr=curr.next;
             lenght++;
         }
         curr.next=head;
         k=k%lenght;
         k=lenght-k;
         while(k>0){
             curr=curr.next;
             k--;
         } 
         head=curr.next;
         curr.next=null;
         return head;
    }
}
