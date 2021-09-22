class Solution {
public:
    vector<int> searchRange(vector<int>& n, int t) {
        vector<int> v;
        
       if(n.empty()){
           v.push_back(-1);
           v.push_back(-1);
       }
        for(int i=0;i<n.size();i++){
          if(n[i]==t){
              v.push_back(i);
          }
        }
        if(v.size()==1)
            //int y=v[0];
            v.push_back(v[0]);
        if(v.size()>2){
            v.erase(v.begin()+1,v.end()-1);
        }
        if(v.empty()){
            v.push_back(-1);
            v.push_back(-1);
        }
        return v;
    }
};
