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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        ListNode* curr=head->next;
        ListNode* prev=head;
        int idx=0;
        vector<int> check;
        

        while(curr->next!=NULL){

            if(curr->val > prev->val && curr->val > curr->next->val || curr->val < prev->val && curr->val < curr->next->val){
                check.push_back(idx);
                
            }
            prev=curr;
            curr=curr->next;

            idx++;
        }
int c=check.size();
if(c<2){
    return{-1,-1};
}
        int mindistance=INT_MAX;
        int maxdistance=check.back()-check.front();
        for(int i=0;i<c-1;i++){
            mindistance=min(mindistance,check[i+1]-check[i]);
        }
        return {mindistance,maxdistance};

        
    }
};