#include <iostream>
#include <stack>
using namespace std;
stack<int> s1,s2;
void push(int x)
{
    s1.push(x);
}
int pop()
{
    if(!s2.empty())
    {
        int t=s2.top();
        s2.pop();
        return t;
    }
    else {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int t=s2.top();
        s2.pop();
        return t;
    }
}
int peek()
{
    if(!s2.empty())
        return s2.top();
    else{
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        return s2.top();
    }
}
bool empty()
{
    if(!s1.empty() || !s2.empty())
        return false;
    else return true;
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    cout<<pop();
    cout<<pop();
    cout<<pop();
    cout<<pop();
    cout<<pop();
    cout<<peek();
    cout<<empty();
}
