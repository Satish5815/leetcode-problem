class Solution {
public:
    int hR(int n,vector<int> nums,vector<int>& dp){
        if(n==0){
            return nums[n];
        }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int pick=nums[n]+hR(n-2,nums,dp);
        int notPick=0+hR(n-1,nums,dp);
        return dp[n]=max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        // dp[0]=nums[0];
        // return hR(n-1,nums,dp);
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            // int pick=nums[i];
            // if(i>1) pick+=dp[i-2];
            // int notpick=0+dp[i-1];
            // dp[i]=max(pick,notpick);
            int pick =nums[i];
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
};
