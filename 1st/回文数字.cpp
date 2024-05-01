#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool isPalindrome(int x) {
    string s = to_string(x);
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return (s == reversed);
}
int main()
{
    int x=123321;
    bool res=isPalindrome(x);
    cout<<res;
}