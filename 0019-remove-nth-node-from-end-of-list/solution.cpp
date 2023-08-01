/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseLinkedList(ListNode* head){
    ListNode* curr=head;
    ListNode* temp=NULL;
    ListNode* prev=NULL;
    while(curr!=NULL){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
ListNode* removeFromLast(ListNode* head,int n){
    if(n==1){
        ListNode* temp=head;
        head=head->next;
        delete(temp);
        head=reverseLinkedList(head);
        return head;
    }
    ListNode* curr=head;
     while(curr!=NULL && n>2){
         curr=curr->next;
         n--;
     }
     ListNode* temp=curr->next;
     curr->next=temp->next;
     delete(temp);
     head=reverseLinkedList(head);
    return head;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       head=reverseLinkedList(head);
       head=removeFromLast(head,n);
       return head;
    }
};
