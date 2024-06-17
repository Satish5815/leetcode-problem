class Solution {
public:
    void findCombinationSum(int ind,int target,vector<int>& condidates,vector<vector<int>> &ans,vector<int> &ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<condidates.size();i++){
            if(i>ind && condidates[i]==condidates[i-1]) continue;
            if(condidates[i]>target) break;
            ds.push_back(condidates[i]);
            findCombinationSum(i,target-condidates[i],condidates,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        findCombinationSum(0,target,candidates,ans,ds);
        return ans;
    }
};
