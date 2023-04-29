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
    public ListNode removeNthFromEnd(ListNode head, int n) {
       List<Integer> list=new ArrayList<>();
       ListNode hea=null,temp=null;
       if(head==null){
           return null;
       }
       while(head!=null){
           list.add(head.val);
           head=head.next;
       }
       int l=list.size()-n;
       list.remove(l);
       ListNode node;
       for(int i=0;i<list.size();i++){
            node =new ListNode(list.get(i));
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
