#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int l=0,r=nums.size()-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(target<nums[mid])
            r=mid-1;
        else if(target>nums[mid])
        l=mid+1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    vector<int> nums= {1,2,3,4,5,6,7};
    int res= searchInsert(nums,6);
    cout<<res;
}