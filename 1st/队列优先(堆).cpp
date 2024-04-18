//
// Created by Admin on 2024/4/18.
//
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct node
{
    int x,y;
    bool operator<(const node &b) const
    //符号重载 operator 被重载的符号 (const 形参）const{}
    //      注：一般把改变形参，所以用const
    {
        return this->x < b.x;
    }
};
int main()
{
    priority_queue<node> que;//结构体
    que.push((node){1,3});
    que.push((node){6,1});
    que.push((node){2,5});
    while(!que.empty())
    {
        cout<<que.top().x;
        que.pop();
    }
    cout<<endl;


    priority_queue<int,vector<int>,less<int>> que2;//priority_queue<类型,容器<>,less<int>大堆顺序(3，2，1）greater(1,2,3)
    que2.push(1);
    que2.push(3);
    que2.push(2);
    while(!que2.empty())
    {
        cout<<que2.top();
        que2.pop();
    }
    cout<<endl;
}