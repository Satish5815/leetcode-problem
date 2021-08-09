class Solution {
public:
    int removeElement(vector<int>& n, int val) {
      int res=0;
        vector<int> v;
        for(int i=0;i<n.size();i++){
            if(n[i]!=val){
              v.push_back(n[i]);
                res++;
            }     
        }
        for(int i=0;i<res;i++)
            n[i]=v[i];
        return res;
    }
};
