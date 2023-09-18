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
    int lengthOfLinkedList(ListNode* head){
        int len=0;
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        int length=lengthOfLinkedList(head);
        if(length==1){
            return head;
        }
        int r=length/2;
        while(r>1 && head!=NULL){
            head=head->next;
            r--;
        }
        if(head->next!=NULL){
           ListNode* temp=head->next;
           return temp;
        }
        return NULL;
    }
};
