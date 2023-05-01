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
    public ListNode deleteDuplicates(ListNode head) {
       Set<Integer> set=new LinkedHashSet<>();
       while(head!=null){
           set.add(head.val);
           head=head.next;
       }
       ListNode temp=null,node=null;
       for(Integer i:set){
          node=new ListNode(i);
          if(temp==null){
              temp=head=node;
          }else{
              temp.next=node;
              temp=temp.next;
          }
       } 
       return head;
    }
}
