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
    public ListNode reverseList(ListNode head) {
        List<Integer> list=new ArrayList<>();
        ListNode hea=null,temp=null;
        if(head==null){
            return null;
        }
        while(head!=null){
            list.add(head.val);
            head=head.next;
        }
        ListNode node;
        for(int i=list.size()-1;i>=0;i--){
          node=new ListNode(list.get(i));
          if(temp==null){
              temp=hea=node;
          }else{
              temp.next=node;
              temp=temp.next;
          }
        }
        return hea;
    }
}
