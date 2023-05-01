class Solution {
    public int searchInsert(int[] nums, int target) {
        if(nums.length==1 && nums[0]==target) {
              return 0;
        }
        if(nums[0]>=target) return 0;
        if(nums.length==1 && nums[0]>target) return 1;
        for(int i=1;i<nums.length;i++){
            if(nums[i-1]==target) return i-1;
            if(nums[i]==target) return i;
            if(nums[i-1]<target && target<nums[i]) return i;
        }
        return nums.length;
    }
}
