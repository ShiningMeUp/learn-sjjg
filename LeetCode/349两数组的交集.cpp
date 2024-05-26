class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0||nums2.size()==0) return {};
        unordered_set <int> myset;
        for(int i=0;i<nums1.size();i++)
        {
            myset.insert(nums1[i]);
        }
        vector<int> res={};
        for(int j=0;j<nums2.size();j++)
        {
            auto fin=find(res.begin(),res.end(),nums2[j]);//vector没有查找函数，用此实现 
            if(myset.count(nums2[j]) && fin==res.end())
            {
                res.push_back(nums2[j]);
            }
        }
        return res;
    }
};





class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0||nums2.size()==0) return {};
        unordered_set <int> myset;
        for(int i=0;i<nums1.size();i++)
        {
            myset.insert(nums1[i]);
        }
        vector<int> res={};
        for(int j=0;j<nums2.size();j++)
        {
            auto fin=find(res.begin(),res.end(),nums2[j]);//vector没有查找函数，用此实现 
            if(myset.count(nums2[j]) && fin==res.end())
            {
                res.push_back(nums2[j]);
            }
        }
        return res;
    }
};






