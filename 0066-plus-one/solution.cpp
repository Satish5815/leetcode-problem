class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<9){
                nums[i]++;
                return nums;
            }
            nums[i]=0;
        }
        nums[0]=1;
        nums.push_back(0);
        return nums;
    }
};
