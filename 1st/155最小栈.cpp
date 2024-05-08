/*
leetcode 155 ��Сջ 
���һ��֧�� push ��pop ��top �����������ڳ���ʱ���ڼ�������СԪ�ص�ջ��
ʵ�� MinStack ��:
MinStack() ��ʼ����ջ����
void push(int val) ��Ԫ��val�����ջ��
void pop() ɾ����ջ������Ԫ�ء�
int top() ��ȡ��ջ������Ԫ�ء�
int getMin() ��ȡ��ջ�е���СԪ�ء�   --->>>�������ܣ���s2ʵ�� 
*/
class MinStack {
public:
    stack<int> s1,s2;
    MinStack() {
    	
    }
    void push(int val) {
        s1.push(val);
        if(s2.empty())
            s2.push(val);
        else
        {
            s2.push(min(s2.top(),val));//��֤s2��ջ����Զ�ǵ�ǰ��С�� 
        }
    }
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
      return s1.top();
    }
    
    int getMin() {
       return s2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
