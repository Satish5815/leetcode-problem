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
    vector<vector<int>> permuteUnique(vector<int>& nums) {
           vector<vector<int>> ans,unique;
            permuteV(ans,0,nums);
            map<vector<int>, int> mp;
                 for(int i = 0; i < ans.size(); i++)
        {
            mp[ans[i]]++;
        }

        for(auto & it: mp)
        {
            unique.push_back(it.first);
        }

        return unique;
    }
};
