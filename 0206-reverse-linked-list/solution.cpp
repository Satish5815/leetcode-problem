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
    ListNode* reverseList(ListNode* head) {
        vector<int> v;
        ListNode* hea=NULL;
        ListNode* temp=NULL;
        if(head==NULL){
            return NULL;
        }
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        ListNode* node;
        for(int i=v.size()-1;i>=0;i--){
           node=new ListNode(v[i]);
           if(temp==NULL){
               temp=hea=node;
           }else{
               temp->next=node;
               temp=temp->next;
           }
        }
        return hea;
    }
};
