/*
���룺s = "abcdefg", k = 2
�����"bacdfeg"
ʾ�� 2��

���룺s = "abcd", k = 2
�����"bacd"
*/

string reverseStr(string s, int k) {
        int now=0;
        while(now<s.size())
        {
            if(now+k<s.size())
            {
                reverse(s.begin()+now,s.begin()+now+k);
            }
            else{
                reverse(s.begin()+now,s.end());
            }
            now+=2*k;
        }
         return s;
    }
