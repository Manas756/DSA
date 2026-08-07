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
ListNode* merge( ListNode* left , ListNode* right ){
    if(left==NULL || right==NULL){
        if(left==NULL) return right;
        else return left;
    }
    if(left->val <=right->val){
        left->next=merge(left->next,right);
        return left;
    }
    else{
        right->next=merge(right->next,left);
        return right;
    }
}
    ListNode* sortList(ListNode* head) {
        if(head ==NULL || head->next==NULL) return head;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
         ListNode* mid=slow;
        
         ListNode* right=mid->next;
         mid->next=NULL;
         ListNode* left=sortList(head);
         right=sortList(right);
         return merge(left,right);
    }
};