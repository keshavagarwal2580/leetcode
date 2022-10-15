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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * node1=head;
        ListNode * node2=head;
        
        if(head->next==nullptr) return nullptr;
        
        int count=0;
        while(node1!=nullptr){
            count++;
            node1=node1->next;
        }
        
        int midIndex=count/2;
        cout<<midIndex;
        
        
        for(int i=0;i<midIndex-1;i++){
            node2=node2->next;
        }
        
        node2->next=node2->next->next;
        return head;
    }
};