class Solution {
public:
    int thirdMax(vector<int>& nums) {
    long long firstMax = LLONG_MIN;  // Initialize to 
    long long secondMax = LLONG_MIN;
    long long thirdMax = LLONG_MIN;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > firstMax) {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = nums[i];
        } else if (nums[i] > secondMax && nums[i] < firstMax) {
            thirdMax = secondMax;
            secondMax = nums[i];
        } else if (nums[i] > thirdMax && nums[i] < secondMax) {
            thirdMax = nums[i];
        }
    }

    return (thirdMax == LLONG_MIN) ? firstMax : thirdMax; 
    }
};
