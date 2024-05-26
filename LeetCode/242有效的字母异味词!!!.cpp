class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char , int > mymap_s;
        unordered_map<char , int > mymap_t;
        for(auto e : s)
        {
            mymap_s[e]++;
        }
        for(auto a : t)
        {
            mymap_t[a]++;
        }
        for(auto b : mymap_s)
        {
            if(b.second!=mymap_t[b.first])//b.second --->>>出现次数
                //b.first  -->>>字符本身
                //mymap_t[b.first]  ---->>在t中出现的次数
            return false;
        }
        return true;
    }
};
