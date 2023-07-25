class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ri=0;
        int rm=arr[0];
        for(int i=1;i<arr.size();i++){
              if(arr[i]>rm){
                  rm=arr[i];
                  ri=i;
              }
        }
        return ri;
    }
};
