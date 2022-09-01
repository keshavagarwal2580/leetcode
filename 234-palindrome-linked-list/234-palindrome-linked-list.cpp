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
    bool isPalindrome(ListNode* head) {
          stack<int> p;
        ListNode* t=head;
       
        while(t!=0)
        {
            p.push(t->val);
            t=t->next;
        }
        
        t=head;
        while(!p.empty())
        {
            if(p.top()==t->val)
            {
                p.pop();
                t=t->next;
            }
            else 
            {
                return false;
            }
        }
        
        return true;
        
    }
};