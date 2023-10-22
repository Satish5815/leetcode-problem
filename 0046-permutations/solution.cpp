class Solution {
public:
   void permuteV(vector<vector<int>> &ans,int index,vector<int>& nums){
       if(nums.size()==index){
           ans.push_back(nums);
       }
       for(int i=index;i<nums.size();i++){
           swap(nums[index],nums[i]);
           permuteV(ans,index+1,nums);
           swap(nums[index],nums[i]);
       }
   }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
         permuteV(ans,0,nums);
         return ans;
    }
};
