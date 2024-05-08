/*
���룺s = "(()())(())"
�����"()()()"
���ͣ�
�����ַ���Ϊ "(()())(())"��ԭ�ﻯ�ֽ�õ� "(()())" + "(())"��
ɾ��ÿ�������е���������ź�õ� "()()" + "()" = "()()()"��
*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
string removeOuterParentheses(string s) {
    stack<char> st;
    string  res;
   for(char ch:s)
   {
       if(ch=='(')
       {
           if(!st.empty())
               res+=ch;
           st.push(ch);
       }
       else
       {
           if(!st.empty())
               st.pop();
           if(!st.empty())
               res+=ch;
       }
   }
    return res;
}
int main()
{
    string a="(()())(())";
    string res= removeOuterParentheses(a);
    cout<<res;

}
