class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int,int> map;
       int l=nums.size();
       vector<int> v;
       for(int i=0;i<l;i++){
         map[nums[i]]++;
       }
       unordered_map<int, int>:: iterator itr;
        for (itr=map.begin(); itr!=map.end(); itr++)
    {
        
        if (itr->second > 1)
        {
          v.push_back(itr->first);
        }
    }
    return v;
    }
};
