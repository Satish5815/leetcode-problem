class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,heigh=nums.size()-1;
        while(low<=heigh){
            int mid=(low+heigh)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>=nums[low]){
                if(nums[low]<=target && nums[mid]>target){
                    heigh=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(target>nums[mid] && target<=nums[heigh]){
                    low=mid+1;
                }else{
                    heigh=mid-1;
                }
            }
        }
        return -1;
    }
};
