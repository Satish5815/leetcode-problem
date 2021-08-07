class Solution {
public:
    int removeDuplicates(vector<int>& n) {
       int res=1;
        if(n.size()==0){
         return NULL;
        }
       for(int i=1;i<n.size();i++){
          if(n[i]!=n[res-1]){
              n[res]=n[i];
              res++;
          }
       }
        return res;
    }
};
