class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size()<3) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || nums[i-1]!=nums[i]){
                int low=i+1,heigh=nums.size()-1,sum=-nums[i];
                while(low<heigh){
                    if(nums[low]+nums[heigh]==sum){
                        ans.push_back({nums[i],nums[low],nums[heigh]});
                        while(low<heigh && nums[low]==nums[low+1])
                        low++;
                        while(low<heigh && nums[heigh]==nums[heigh-1])
                        heigh--;
                        low++;
                        heigh--;
                    }else if(nums[low]+nums[heigh]<sum){
                        low++;
                    }else{
                        heigh--;
                    }
                }
            }
        }
        return ans;
    }
};
