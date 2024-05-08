/*���룺"abbaca"
�����"ca"
���ͣ�
���磬�� "abbaca" �У����ǿ���ɾ�� "bb" ��������ĸ��������ͬ�����Ǵ�ʱΨһ����ִ��ɾ���������ظ��֮�����ǵõ��ַ��� "aaca"��������ֻ�� "aa" ����ִ���ظ���ɾ�����������������ַ���Ϊ "ca"��*/

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
string removeDuplicates(string s) {
    stack<char> st;
    for(char ch:s)
    {
        if(st.empty() || st.top()!=ch)  //--->>>main method
            st.push(ch);
        else{
            st.pop();
        }
    }
    string res;
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    string a="abbaca";
    string res= removeDuplicates(a);
    cout<<res;
}
