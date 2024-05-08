/*
输入：s = "(()())(())"
输出："()()()"
解释：
输入字符串为 "(()())(())"，原语化分解得到 "(()())" + "(())"，
删除每个部分中的最外层括号后得到 "()()" + "()" = "()()()"。
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
