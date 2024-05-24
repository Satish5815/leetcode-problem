class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> our_map;
       for(int i=0;i<nums.size();i++){
         int sum=target-nums[i];
         if(our_map.find(sum)!=our_map.end()){
             return {our_map[sum],i};
         }
         our_map[nums[i]]=i;
       }
       return {};
    }
};
