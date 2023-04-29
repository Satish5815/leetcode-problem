/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var swapPairs = function(head) {
    let temp=head;
    let curr;
    while(temp!=null && temp.next!=null){
      curr=new ListNode(temp.val);
      temp.val=temp.next.val;
      temp.next.val=curr.val;
      temp=temp.next.next;
    }
    return head;
};
