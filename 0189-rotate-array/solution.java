class Solution {
    public void rotate(int[] nums, int k) {
        if(nums==null || nums.length==0){
            return;
        }
        int l=nums.length;
        int[] a=new int[l];
        for(int i=0;i<l;i++){
            a[(i+k)%l]=nums[i];
        }
       for(int i=0;i<l;i++){
           nums[i]=a[i];
       }
    }
}
