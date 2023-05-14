class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        set<int> s;
        for(int i=0;i<nums1.size();i++){
             for(int j=0;j<nums2.size();j++){
                 if((nums1[i]==nums2[j]) && !(s.find(nums1[i]) != s.end())){
                     s.insert(nums1[i]);
                     v.push_back(nums1[i]);
                 }
             }
        }
        return v;
    }
};
