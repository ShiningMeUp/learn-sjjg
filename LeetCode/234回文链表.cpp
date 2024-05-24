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
        if(head==nullptr || head->next==nullptr)
        return true;
        vector<int> num;
        while(head!=nullptr)
        {
            num.push_back(head->val);
            head=head->next;
        }
        //将链表的所有数放入num中
		//分别从前和后对比遍历 
        for(int i=0,j=num.size()-1;i<num.size();i++)
        {
            if(num[i]!=num[j])
            return false;
            j--;
        }
        return true;
    }
};
