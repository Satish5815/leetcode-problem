class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int> b(n,0);
        for(int i=0;i<n;i++){
            b[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(b[i]>1){
                return i;
            }
        }
        return -1;
    }
};
