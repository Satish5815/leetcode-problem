/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
   function reverseList(head){
       let temp=null;
       let curr=head;
       let prev=null;
       while(curr!=null){
           temp=curr.next;
           curr.next=prev;
           prev=curr;
           curr=temp;
       }
       return prev;
   }
   function removeFromLast(head,n){
       if(n==1){
           head= head.next;
           head=reverseList(head);
       return head;
       }
       let curr=head;
       while(curr!=null && n>2){
           curr=curr.next;
           n--;
       }
       let temp=curr.next;
       curr.next=temp.next;
       head=reverseList(head);
       return head;
   }
var removeNthFromEnd = function(head, n) {
    head=reverseList(head);
    return removeFromLast(head,n);
};
