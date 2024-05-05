#include <queue>  //���е�ջ��
#include <iostream>
using namespace std;
void QuPush(queue<int> &qu,int x)
{
    qu.push(x);
    for(int i=1;i<qu.size();i++)//�Ѳ���Ԫ��ǰ������Ԫ�������ŵ�����
    {
        qu.push(qu.front());
        qu.pop();
    }
    /*
     * �������������1��2������Ҫ����3
     * 1��2��3
     * 2��3��1
     * 3��1��2(��ʱ�Ѿ������Ѿ����ջ��)
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
