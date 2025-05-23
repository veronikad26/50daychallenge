class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        long long n=nums.size();
        int low=0,high=n-1,index=n;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            if(nums[mid]>=target){
                index=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return index;
    }
};