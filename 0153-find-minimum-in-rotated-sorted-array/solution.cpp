class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,heigh=nums.size()-1;
        while(low<=heigh){
            if(nums[low]<=nums[heigh]){
                return nums[low];
            }
            int mid=(low+heigh)/2;
            if(nums[mid]<=nums[mid+1] && nums[mid]<=nums[mid-1]){
                return nums[mid];
            }else if(nums[mid]<=nums[heigh]){
                heigh=mid-1;
            }else if(nums[mid]>=nums[low]){
                low=mid+1;
            }
        }
        return -1;
    }
};
