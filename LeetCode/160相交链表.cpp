/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==nullptr || headB==nullptr) return nullptr;
        ListNode *a=headA,*b=headB;
        int flag=0;
        while(a!=b)
        {
            if(a->next!=nullptr)
            a=a->next;
            else{
                a=headB;
                flag++;
            }
            if(b->next!=nullptr)
                b=b->next;
            else{
                b=headA;
                flag++;
            }
            if(flag>=3)
            return nullptr;
        }
        return a;
    }
};
