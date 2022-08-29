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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=new ListNode();
        ListNode *temp=ans;
        int carry=0;
        while(l1!=NULL && l2!=NULL){
            ListNode * l3=new ListNode(); 
            temp->next=l3;
            temp=temp->next;
            int x=l1->val,y=l2->val;
            int c=x+y+carry;
            carry=0;
            if(c>=10){
                carry=c/10;
                c=c%10;
            }
            l3->val=c;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            ListNode * l3=new ListNode(); 
            temp->next=l3;
            temp=temp->next;
            int x=l1->val+carry;
            carry=0;
            if(x>=10){
                carry=x/10;
                x=x%10;
            }
            l3->val=x;
            l1=l1->next;           
        }
        while(l2){
            ListNode * l3=new ListNode(); 
            temp->next=l3;
            temp=temp->next;
            int x=l2->val+carry;
            carry=0;
            if(x>=10){
                carry=x/10;
                x=x%10;
            }
            l3->val=x;
            l2=l2->next;           
        }
        if(carry){
            ListNode * l3=new ListNode(); 
            temp->next=l3;
            temp=temp->next;
            l3->val=carry;
        }
        return ans->next;
    }
};