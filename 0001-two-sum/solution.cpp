class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
      vector<int> v;
       for(int i=0;i<n.size()-1;i++){
           for(int j=i+1;j<n.size();j++){
                int sum=n[i]+n[j];
               if(sum==target){
                   v.push_back(i);
                   v.push_back(j);
               }
           }
       }
       return v;
    }
};
