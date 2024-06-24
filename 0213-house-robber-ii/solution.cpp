class Solution {
public:
    int hr2(int n,vector<int> &nums){
        // if(n==0){
        //     return nums[0];
        // }
        // if(n<0){
        //     return 0;
        // }
        // if(dp[n]!=-1){
        //     return dp[n];
        // }
        // int pick=nums[n]+hr2(n-2,nums,dp);
        // int notpick=0+hr2(n-1,nums,dp);
        // return dp[n]=max(pick,notpick);
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int pick=nums[i];
            if(i>1){
                pick+=prev2;
            }
            int notpick=0+prev;
            int curi=max(pick,notpick);
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        vector<int> temp1;
        vector<int> temp2;
        int n=nums.size();
        // vector<int> dp1(n,-1);
        // vector<int> dp2(n,-1);
        if(n==1){
            return nums[0];
        }
        for(int i=0;i<n-1;i++){
            temp1.push_back(nums[i]);
        }
        for(int i=1;i<n;i++){
            temp2.push_back(nums[i]);
        }
        //using memoization
        // return max(hr2(n-2,temp1,dp1),hr2(n-2,temp2,dp2));
         return max(hr2(n-1,temp1),hr2(n-1,temp2));
    }
};
