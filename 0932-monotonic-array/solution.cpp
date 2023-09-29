class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool incresing=true;
        bool decresing=true;
        for(int i=1;i<nums.size();i++){
            incresing&=nums[i]>=nums[i-1];
            decresing&=nums[i]<=nums[i-1];
        }
        return decresing||incresing;
    }
};
