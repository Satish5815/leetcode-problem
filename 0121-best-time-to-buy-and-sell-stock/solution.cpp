class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int profite=0;
        for(int i=0;i<prices.size();i++){
            buy=min(prices[i],buy);
            profite=max(profite,prices[i]-buy);
        }
        return profite;
    }
};
