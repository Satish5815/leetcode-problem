/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function(list1, list2) {
    let head=null,temp=null;
    while(list1!==null && list2!==null){
      let node;
      if(list1.val<=list2.val){
        node=new ListNode(list1.val);
        list1=list1.next;
      }else{
         node=new ListNode(list2.val);
        list2=list2.next;
      }
      if(temp===null){
        temp=head=node;
      }else{
        temp.next=node;
        temp=temp.next;
      }
    }
    if(temp===null){
      return list1!==null ? list1:list2;
    }else{
      temp.next=list1!==null ? list1:list2;
    }
    return head;
};
