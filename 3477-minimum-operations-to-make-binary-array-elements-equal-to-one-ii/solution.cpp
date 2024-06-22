class Solution {
public:
    int minOperations(vector<int>& nums) {
          int n = nums.size();
    if (n == 0) return 0;
    
    int flips = 0;
    
    // Count transitions from 0 to 1 and 1 to 0
    for (int i = 1; i < n; ++i) {
        if (nums[i] != nums[i-1]) {
            flips++;
        }
    }
    
    // If the first element is 0, we need an additional flip
    if (nums[0] == 0) flips++;
    
    return flips;
    }
};
