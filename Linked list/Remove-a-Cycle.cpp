class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      ListNode* slow=head;
      ListNode* fast=head;
      bool iscycle=false;
      while(fast!=NULL && fast->next!=NULL){
        slow =slow->next;
        fast=fast->next->next;
        if(slow==fast){
        iscycle=true;
        break;
      }
    }
    if(!iscycle){
        return NULL;

    slow=head;
    ListNode* prev=NULL;
    while(slow!=fast){
        slow=slow->next;
        prev=fast;
        fast=fast->next;
    
    }
    prev->next=NULL;//remove cycle
    return slow;}
};