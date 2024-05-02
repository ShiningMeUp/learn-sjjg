#include <iostream>
#include <vector>
using namespace std;
int Binsearch(vector<int> &nums,int target)
{
    int left=0,right=nums.size()-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(target<nums[mid])
            right=mid-1;
        else if(target>nums[mid])
            left=mid+1;
        else return mid;
    }
    return -1;
}
int main()
{
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};
    int res= Binsearch(nums,6);
    cout<<res;
}