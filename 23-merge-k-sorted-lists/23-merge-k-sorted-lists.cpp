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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue <int,vector<int>,greater<>> pq;
        for(auto it: lists){
            while(it){
                pq.push(it->val);
                it=it->next;
            }
        }
        ListNode * prev=new ListNode();
        ListNode * head=prev;
        while(!pq.empty()){
            ListNode* x=new ListNode();
            x->val=pq.top();
            if(head==NULL) head=x;
            prev->next=x;
            prev=prev->next;
            pq.pop();
        }
        return head->next;
    }
};