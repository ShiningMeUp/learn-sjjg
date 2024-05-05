#include <queue>  //队列当栈用
#include <iostream>
using namespace std;
void QuPush(queue<int> &qu,int x)
{
    qu.push(x);
    for(int i=1;i<qu.size();i++)//把插入元素前的所有元素依次排到后面
    {
        qu.push(qu.front());
        qu.pop();
    }
    /*
     * 例如队列中已有1，2，现在要插入3
     * 1，2，3
     * 2，3，1
     * 3，1，2(此时已经队列已经变成栈了)
     * */
}
int QuPop(queue<int> &qu)
{
    int res=qu.front();
    qu.pop();
    return res;
}
int QuTop(queue<int> &qu)
{
    return qu.front();
}
bool IsEmpty(queue<int> &qu)
{
    return qu.empty();
}
int main()
{
    queue<int> qu;
    QuPush(qu,1);
    QuPush(qu,2);
    QuPush(qu,3);
    QuPush(qu,4);
    QuPush(qu,5);
    cout<<QuPop(qu)<<endl;
    cout<<QuPop(qu)<<endl;
    cout<<QuPop(qu)<<endl;
    cout<<QuTop(qu)<<endl;
    cout<<IsEmpty(qu);
}
