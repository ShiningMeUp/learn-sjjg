 //如果链表中存在环 ，则返回 true 。 否则，返回 false 。 
 bool hasCycle(ListNode *head) {
        if(head==nullptr)
        return false;
        ListNode *slow=head,*fast=head;
        while(fast!=nullptr && fast->next != nullptr)
        {
            slow=slow->next;//慢指针每次向后移动1个 
            fast=fast->next->next;//快指针每次向后移动2个 
            if(slow==fast)
            return true;
        }
        return false;
    }
