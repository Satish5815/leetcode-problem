class Solution {
public:
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
    int l1=v1.size();
    int l2=v2.size();
    int i=0;
    int j=0;
    vector<int> v;
    while(i<l1 && j<l2){
        if(v1[i]<v2[j]){
            v.push_back(v1[i++]);
        }else{
            v.push_back(v2[j++]);
        }
    }
    while(i<l1){
        v.push_back(v1[i++]);
    }
    while(j<l2){
        v.push_back(v2[j++]);
    }
   int l3=v.size();
   if(l3%2==0){
      return (float)(v[l3/2-1]+v[l3/2])/2;
   }else{
       return (float)v[l3/2];
   }
    }
};
