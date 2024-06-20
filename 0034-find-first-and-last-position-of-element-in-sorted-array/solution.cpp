class Solution {
public:
    int firstOccurance(vector<int> &nums,int target){
        int low=0,high=nums.size()-1;
        int result=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){
                high=mid-1;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                if(nums[mid]==target){
                    result= mid;
                    high=mid-1;
                }
            }
        }
        return result;
    }
    int lastOccurance(vector<int> &nums,int target){
        int low=0,high=nums.size()-1;
        int result=-1;
        while(low<=high){
             int mid=low+(high-low)/2;
              if(nums[mid]>target){
                high=mid-1;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                if(nums[mid]==target){
                   result= mid;
                   low=mid+1;
                }
            }
        }
        
            return result;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> f;
        f.push_back(firstOccurance(nums,target));
        f.push_back(lastOccurance(nums,target));
        return f;
    }
};
