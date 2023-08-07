class Solution {
public:
    bool searchElement(vector<int> v,int target){
        int low=0,heigh=v.size()-1;
        while(low<=heigh){
           int mid=(low+heigh)/2;
           if(v[mid]==target){
               return true;
           } else if(v[mid]>target){
               heigh=mid-1;
           }else{
               low=mid+1;
           }
        }
       return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
         if(searchElement(matrix[i],target)) return true;
        }
        return false;
    }
};
