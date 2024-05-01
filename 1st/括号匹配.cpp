#include <iostream>
#include <stack>
using namespace std;
bool isMatch(char left,char right)
{
    switch (right) {
        case ')':return left=='(';
        case ']':return left=='[';
        case '}':return left=='{';
        default:return false;
    }
}
bool isValid(string s) {
    stack<char> st;
    if(s.size()==0) return true;
    for(auto currentChar:s)
    {
        if(currentChar==')'||currentChar==']'||currentChar=='}')
        {
            if(st.empty()||!isMatch(st.top(),currentChar))
            {
                return false;
            }else{
                st.pop();
            }
        } else st.push(currentChar);
    }
    return st.empty();
}
int main()
{
    string s="{[]}";
    bool res=isValid(s);
    cout<<res;
}