class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       
     int l=nums.size();
     int a[l];
     for(int i=0;i<l;i++){
           a[(k+i)%l]=nums[i];
     }
     for(int i=0;i<l;i++){
        nums[i]=a[i];
     }
    }
};
