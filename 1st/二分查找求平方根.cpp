#include <iostream>
#include <vector>
using namespace std;
int mySqrt(int x) {
    int left=0,right=x,res=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if((long long)mid*mid<=x)
        {
            res=mid;
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return res;
}
int main()
{
    int res= mySqrt(8);
    cout<<res;
}
//1,2,3,4,5,6,7,8
