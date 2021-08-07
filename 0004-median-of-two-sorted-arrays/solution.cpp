class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
      vector<int> v;
        for(int i=0;i<n1.size();i++){
            v.push_back(n1[i]);
        }
         for(int i=0;i<n2.size();i++){
            v.push_back(n2[i]);
        }
        sort(v.begin(),v.end());
        double x=0;
        int m=v.size();
        if(m%2==0){
           x=(float)(v[m/2-1]+v[m/2])/2; 
        }else{
            x=(float)(v[(m+1)/2-1]);
        }
        return x;
    }
};
