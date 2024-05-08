/*
leetcode 155 最小栈 
设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。
实现 MinStack 类:
MinStack() 初始化堆栈对象。
void push(int val) 将元素val推入堆栈。
void pop() 删除堆栈顶部的元素。
int top() 获取堆栈顶部的元素。
int getMin() 获取堆栈中的最小元素。   --->>>新增功能，用s2实现 
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
            s2.push(min(s2.top(),val));//保证s2的栈顶永远是当前最小的 
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
