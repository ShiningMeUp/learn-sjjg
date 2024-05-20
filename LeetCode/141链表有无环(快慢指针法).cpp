 //如果链表中存在环 ，则返回 true 。 否则，返回 false 。 
 bool hasCycle(ListNode *head) {
        if(head==nullptr)
        return false;
        ListNode *slow=head,*fast=head;
        while(fast!=nullptr && fast->next != nullptr)  
		/*没有fast->next != nullptr时，若链表为[1]时，fast和slow都为nullptr，当两个指针都为nullptr是，是相等的*/ 
        {
            slow=slow->next;//慢指针每次向后移动1个 
            fast=fast->next->next;//快指针每次向后移动2个 
            if(slow==fast)
            return true;
        }
        return false;
    }
