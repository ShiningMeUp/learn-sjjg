 //��������д��ڻ� ���򷵻� true �� ���򣬷��� false �� 
 bool hasCycle(ListNode *head) {
        if(head==nullptr)
        return false;
        ListNode *slow=head,*fast=head;
        while(fast!=nullptr && fast->next != nullptr)
        {
            slow=slow->next;//��ָ��ÿ������ƶ�1�� 
            fast=fast->next->next;//��ָ��ÿ������ƶ�2�� 
            if(slow==fast)
            return true;
        }
        return false;
    }
