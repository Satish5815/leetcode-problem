class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        for(int i=0;i<nums.size();i++){
            freqMap[nums[i]]++;
        }
        int maxFreq = 0;
        int maxFreqNum = -1;
    for (const auto& pair : freqMap) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            maxFreqNum = pair.first;
        }
    }
    return  maxFreqNum;
    }
};
