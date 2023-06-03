class Solution {
    public int maxProfit(int[] nums) {
        int buy=Integer.MAX_VALUE;
        int profite=0;
        for(int i=0;i<nums.length;i++){
            buy=Math.min(buy,nums[i]);
            profite=Math.max(profite,nums[i]-buy);
        }
        return profite;
    }
}
