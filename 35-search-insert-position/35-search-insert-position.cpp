class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int index=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        // return index;
        if(target < nums[0]) return 0;
        int low=0,high=nums.size()-1;
        if(target > nums[nums.size() - 1]) return high+1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target){
                low=mid+1;
            }else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                return mid;
            }
        }
        if(nums[high]<target){
            return high+1;
        }
        else if(nums[high]>target){
            return high;
        }
        return high;
    }
};