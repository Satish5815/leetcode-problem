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
    static ListNode reverseLinkedList(ListNode list){
        if(list==null) return null;
        ListNode prev=null,curr=list,temp=null;
        while(curr!=null){
            temp=curr.next;
            curr.next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        if(l1==null){
            return l2;
        }if(l2==null){
            return l1;
        }
        l1=reverseLinkedList(l1);
        l2=reverseLinkedList(l2);
        ListNode head=null,temp=null;
        int sum=0,carry=0;
        while(l1!=null || l2!=null){
            sum=carry;
            if(l1!=null){
                sum+=l1.val;
                l1=l1.next;
            }
             if(l2!=null){
                sum+=l2.val;
                l2=l2.next;
            }
            
            ListNode node=new ListNode(sum%10);
            carry=sum/10;
            if(temp==null){
                temp=head=node;
            }else{
                temp.next=node;
                temp=temp.next;
            }
        }
        if(carry>0){
            temp.next=new ListNode(carry);
        }
        return reverseLinkedList(head);
    }
}
