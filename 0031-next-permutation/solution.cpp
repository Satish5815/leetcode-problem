class Solution {
public:
    void nextPermutation(vector<int>& n) {
        next_permutation(n.begin(),n.end());
        for(int i=0;i<n.size();i++)
            cout<<n[i]<<" ";
    }
};
