class Solution {
public:
    bool firstOccurance(vector<int>& nums,int target){
        int low=0,heigh=nums.size()-1;
        while(low<=heigh){
            int mid=(low+heigh)/2;
            if(nums[mid]==target) return true;
            if(nums[mid]>target){
                heigh=mid-1;
            }else{
                low=mid+1;
            }
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        return firstOccurance(nums,target);
    }
};
